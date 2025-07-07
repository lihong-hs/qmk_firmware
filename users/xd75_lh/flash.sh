#!/bin/bash

set -e

sudo dfu-programmer atmega32u4 erase --force
sudo dfu-programmer atmega32u4 flash ../../.build/xiudi_xd75_lh.hex
sudo dfu-programmer atmega32u4 reset
