#!/bin/bash

set -e

FILE=$1

if [ -f "$FILE" ]; then

  echo "1) Copying the keymap json"
  cp $FILE $QMK_FIRMWARE_DIR/users/xd75_lh/keymap.json

  echo "2) Converting keymap from json to c"
  qmk json2c $FILE > $QMK_FIRMWARE_DIR/keyboards/xiudi/xd75/keymaps/lh/keymap.c
    
  echo "3) Adding keymap_extra.c to keymap.c"
  cat keymap_extra.c >> $QMK_FIRMWARE_DIR/keyboards/xiudi/xd75/keymaps/lh/keymap.c

  echo "4) Compiling"
  qmk compile -kb xiudi/xd75 -km lh
    
  echo "5) Done"
   
else 
    echo "File named \"$FILE\" does not exist."
fi
