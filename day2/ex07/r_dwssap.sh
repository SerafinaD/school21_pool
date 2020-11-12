#!/bin/bash
cat /etc/passwd | cut -d "#" -f 1 | awk 'NF' | cut  -d ":" -f 1 | rev | sort -r | awk 'NR%2==1' | tr '\n' ',' | sed 's/,$/./'
