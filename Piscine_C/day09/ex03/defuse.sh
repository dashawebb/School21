touch -A -000001 -a bomb.txt
stat -s bomb.txt | cut -d '=' -f10 | sed 's/ st_mtime//'
