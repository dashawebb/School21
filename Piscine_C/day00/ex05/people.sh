ldapsearch -Q "(uid=z*)" | grep '^cn:' | sort -r --ignore-case | cut -c5-
