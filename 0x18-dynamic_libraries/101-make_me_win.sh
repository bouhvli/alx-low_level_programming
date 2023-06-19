#!/bin/basah
wget -P .. https://raw.githubusercontent.com/bouhvli/alx-low_level_programming/main/0x18-dynamic_libraries/gmwin.so
export LD_PRELOAD="$pwd/gmwin.so"