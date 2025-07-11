#!/bin/bash

set -e

COMPILE_FILE=xiudi_xd75_lh.hex

sudo dfu-programmer atmega32u4 erase --force
sudo dfu-programmer atmega32u4 flash $QMK_FIRMWARE_DIR/.build/$COMPILE_FILE
sudo dfu-programmer atmega32u4 reset
