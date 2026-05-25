# Shell00

## Exercise 00: Z
- 'touch' to create file
- 'cat <file>' to view file
- 'cat > <file>' to overwrite file 
- 'cat >> <file>' to append file
- Cltl + d to escape 

## Exercise 01: testShell00
- 'ls -l' to view all files and their permissions 
- Permission is formatted as <file type><RWX(owner)><RWX(group)><RWX(others)>
- Change permission using 'chmod' 
- A tar file is similar to a zip file

## Exercise 02: Oh yeah, mooore...

- Use 3 digit shorthand when writing 'chmod' 
- Each digit is the sum of the authorisation of each category (owner, group, others) Read = 4, Write = 2, Execute = 1 
- Alternatively, you can do chmod + r/w/x to allow feature access across all groups
- Use 'ln -s' a symlink (alias) <original file> <alias name>
- 'tar -xvf' to extract file 

| Number | Permissions |
|--------|-------------|
| 0 | --- |
| 1 | --x |
| 2 | -w- |
| 3 | -wx |
| 4 | r-- |
| 5 | r-x |
| 6 | rw- |
| 7 | rwx |

## Exercise 03: SSH me!
- Use 'ssh-keygen' to generate a ssh key
- use cltl shift c to copy from terminal

## Exercise 04: midLS
- 

## Exercise 05: GiT commit
## Exercise 06: gitignore
git ls-files --ignored --exclude-standard -o
- list all files, using gitignore, standard rules, -o shows untracked files

## Exercise 07: diff
## Exercise 08: clean
- make the file executable chmod +x
- find <criteria> -name "*~" ends with tilde 

## Exercise 09: Illusions, not tricks, Michael...
- make magic file, executable

## Others 
- Use fish to open fish ide.