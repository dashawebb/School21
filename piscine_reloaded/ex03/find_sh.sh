find . -type f -name "*.sh" | cut -d '.' -f2 | sed 's#.*/##'
