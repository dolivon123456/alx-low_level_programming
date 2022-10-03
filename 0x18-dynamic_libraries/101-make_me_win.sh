#!/bin/bash
wget -P /tmp https://github.com/dolivon123456/alx-low_level_programming/master/0x18-dynamic_libraries/libeleccrazy.so
export LD_PRELOAD=/tmp/libeleccrazy.so
