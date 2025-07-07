#!/bin/bash

set -e

FILE=$1

if [ -f "$FILE" ]; then
    echo
    echo "1) Converting keymap from json to c"
    qmk json2c $FILE > ../../keyboards/xiudi/xd75/keymaps/lh/keymap.c
    
    echo
    echo "2) Adding keymap_extra.c to keymap.c"
    cat keymap_extra.c >> ../../keyboards/xiudi/xd75/keymaps/lh/keymap.c

	echo
    echo "3) Compiling"
	echo
    qmk compile -kb xiudi/xd75 -km lh
    
	echo
    echo "4) Done"
   
else 
    echo "File named \"$FILE\" does not exist."
fi



