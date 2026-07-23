#!/bin/bash

// this script will make a prebuilt UF2 with the scripts on it for if you do not want to go thru with sending them over.


cd WIZnet-EVB-Pico-micropython
make -C mpy-cross

cd ports/rp2

make submodules

make BOARD=W5100S_EVB_PICO2

cp -r build-W5100S_EVB_PICO2 ../../../uf2





