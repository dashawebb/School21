cat /etc/passwd | grep -v -e '#' | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -f -r | sed -n $FT_LINE1,$FT_LINE2'p' |  tr '\n' ',' | sed -e 's/,/, /g' -e 's/, $/./' | tr -d '\n'
