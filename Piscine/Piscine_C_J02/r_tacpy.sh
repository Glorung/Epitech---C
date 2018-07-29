cut -d ':' -f 1 | sed '1~2d' | rev | sort -r | head -n $MY_LINE2 | tail -n $(($MY_LINE2 - $MY_LINE1 + 1)) | tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/#/' | rev | sed 's/#/.\n/'
