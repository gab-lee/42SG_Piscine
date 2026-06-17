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
perl ./gen_map.pl 20000 20000 3 > testmaps/map_huge.txt

echo "test_maps/ populated."