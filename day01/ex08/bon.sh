ldapsearch -Q "(uid=*bon*)" | grep 'sn' | wc -l | tr -d ' '
