#!/bin/bash
// Requires the micropython code to already be flashed to the device
mkdir uf2
wget -O picotool.tar.gz https://github.com/raspberrypi/pico-sdk-tools/releases/download/v2.3.0-0/picotool-2.3.0-x86_64-lin.tar.gz
tar -xzf picotool.tar.gz
cd picotool

picotool save -a ../uf2/build.uf2
