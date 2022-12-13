cat /etc/passwd | grep -v '^#' | awk 'FNR % 2 == 0' | cut -d ':' -f1 | rev | sort -r | awk 'FNR >= ENVIRON["FT_LINE1"] && FNR <= ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
