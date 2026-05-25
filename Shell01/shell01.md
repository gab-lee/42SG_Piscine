# Shell01
## Exercise 00: Exam
- No action required
  
## Exercise 01: print_groups
- id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
- small g is one gorup only

## Exercise 02: find_sh
- use 'find'
' find . -name "*.sh" -print'

## Exercise 03: count_files
- use '|' to pipe information
- use ls to display all files into lines
- wc -l to count the number of lines

## Exercise 04: MAC
- use 'ifconfig' to display all results
- filter by using 'grep <attribute>'

## Exercise 05: Can you create it ?
- ls -lRa *MaRV* | cat -e: list all files and directories (including hidden onces) matching the pattern *MaRV*
- '' makes everything literal 
- $ means \ works 
- \ takes the value of the next char

## Exercise 06: Skip
-  'ls -l' list all
-  pipe through a function
-  awk '(NR+1) %2 ==0'

## Exercise 07: r_dwssap

## Exercise 08: add_chelou
