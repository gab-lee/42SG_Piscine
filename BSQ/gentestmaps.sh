#!/bin/bash

# Generate testmaps/ for BSQ.
# Run: bash gentestmaps.sh

mkdir -p testmaps

# ── Normal cases ───────────────────────────────────────────────────────────
# Sparse: low obstacle density, expects a large square
perl ./gen_map.pl 100 100 3 > testmaps/map_sparse.txt

# Medium: moderate density
perl ./gen_map.pl 50  50  6 > testmaps/map_medium.txt

# ── Edge: boundary sizes ───────────────────────────────────────────────────
# 1x1 single empty cell — smallest valid map (max square = 1)
perl ./gen_map.pl 1  1  0 > testmaps/map_1x1_empty.txt

# 1x1 single obstacle — no empty cell, expects "map error"
perl ./gen_map.pl 1  1  10 > testmaps/map_1x1_filled.txt

# 1 row, many columns (density must be < 2 when y=1 or all cells become obstacles)
perl ./gen_map.pl 200 1 1 > testmaps/map_1row.txt

# Many rows, 1 column
perl ./gen_map.pl 1 200 3 > testmaps/map_1col.txt

# ── Edge: all-empty / all-full ─────────────────────────────────────────────
# All empty cells (density=0) — max square = min(rows, cols)
perl ./gen_map.pl 50 50 0 > testmaps/map_all_empty.txt

# All obstacle cells (density >> rows so rand always triggers) — "map error"
perl ./gen_map.pl 50 50 100 > testmaps/map_all_full.txt

# ── Edge: invalid / zero-content ──────────────────────────────────────────
# 0 bytes — no header at all, expects "map error"
printf '' > testmaps/map_0bytes.txt

# Header declares 0 rows — fails validation, expects "map error"
printf '0.ox\n' > testmaps/map_zero_rows.txt

# ── Stress test ───────────────────────────────────────────────────────────
# 20000x20000, sparse — NOTE: ~380MB file, takes several minutes to generate
#perl ./gen_map.pl 20000 20000 3 > testmaps/map_huge.txt

# ── Invalid: header too short (< 4 chars before '\n') ─────────────────────
# red_hdr checks i >= 4; replace valid header with 3-char one → map error
perl ./gen_map.pl 50 10 3 > testmaps/map_hdr_too_short.txt
sed -i '1s/.*/1.o/' testmaps/map_hdr_too_short.txt

# ── Invalid: header too long (> 99 chars before '\n') ─────────────────────
# red_hdr reads only 99 chars into buf; remaining bytes shift into row 1 → map error
perl ./gen_map.pl 50 10 3 > testmaps/map_hdr_too_long.txt
perl -i -pe '$. == 1 and $_ = "10" . "a" x 100 . ".ox\n"' testmaps/map_hdr_too_long.txt

# ── Invalid: bad character within map (medium size, 20×50) ────────────────
# Valid map but char 26 of data row 6 (line 7) replaced with '!' → red_read_row -1
perl ./gen_map.pl 50 20 6 > testmaps/map_invalid_char.txt
sed -i '7s/^\(.\{25\}\)./\1!/' testmaps/map_invalid_char.txt

# ── Invalid: extra row — 1 trailing char after last valid row ─────────────
# red_rws reads info->rows rows then checks read()>0; any extra byte → map error
perl ./gen_map.pl 50 10 3 > testmaps/map_extra_row_1char.txt
printf 'x' >> testmaps/map_extra_row_1char.txt

# ── Invalid: extra row — 1 full extra row appended ────────────────────────
perl ./gen_map.pl 50 10 3 > testmaps/map_extra_row_full.txt
printf '%50s\n' '' | tr ' ' '.' >> testmaps/map_extra_row_full.txt

# ── Invalid: extra col — 1 extra char on one interior row ─────────────────
# red_get_cols reads row 1 → cols=50; row 6 (line 7) has 51 chars → '\n' check fails
perl ./gen_map.pl 50 10 3 > testmaps/map_extra_col_1char.txt
sed -i '7s/$/./' testmaps/map_extra_col_1char.txt

# ── Invalid: extra col — all rows except row 1 have 1 extra char ──────────
# red_get_cols → cols=50 (line 2); line 3+ have 51 chars → row 2 '\n' check fails
perl ./gen_map.pl 50 10 3 > testmaps/map_extra_col_full.txt
sed -i '3,$s/$/./' testmaps/map_extra_col_full.txt

# ── Invalid: different col count in every row ──────────────────────────────
# row 1 stays 50 cols (sets cols); each subsequent row grows by 1 → row 2 fails
perl ./gen_map.pl 50 10 3 > testmaps/map_diff_cols.txt
perl -i -pe '$. > 1 and do { chomp; $_ .= "." x ($. - 2) . "\n" }' testmaps/map_diff_cols.txt

# ── Invalid: less row — last row is 1 char short ──────────────────────────
# red_read_row reads 49 chars then '\n' as char 50; '\n' != emp/obs → map error
perl ./gen_map.pl 50 10 3 > testmaps/map_less_row_1char.txt
sed -i '$s/.$//' testmaps/map_less_row_1char.txt

# ── Invalid: less row — entire last row absent ────────────────────────────
# red_rws expects info->rows rows; only rows-1 present → read() hits EOF mid-loop
perl ./gen_map.pl 50 10 3 > testmaps/map_less_row_full.txt
sed -i '$d' testmaps/map_less_row_full.txt

# ── Invalid: less col — 1 char short on one interior row ──────────────────
# red_get_cols → cols=50; row 6 (line 7) has 49 chars → loop reads '\n' as char 50
perl ./gen_map.pl 50 10 3 > testmaps/map_less_col_1char.txt
sed -i '7s/.$//' testmaps/map_less_col_1char.txt

# ── Invalid: less col — all rows except row 1 are 1 char short ────────────
# red_get_cols → cols=50 (line 2); line 3+ have 49 chars → row 2 fails
perl ./gen_map.pl 50 10 3 > testmaps/map_less_col_full.txt
sed -i '3,$s/.$//' testmaps/map_less_col_full.txt

echo "test_maps/ populated."