#!/bin/sh
egrep -v "^#" /etc/passwd | cut -d : -f 1 | awk  "(NR+1)%2 {print}"| rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2 {print}" | tr '\n' ',' | sed 's/.$/\./' | sed 's/,/, /g' | tr -d '\n'
