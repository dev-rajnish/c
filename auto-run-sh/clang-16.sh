#!/bin/bash 
clear

cx="/home/rajnish/data/codes/c/cx/$1"
cxf="/home/rajnish/data/codes/c/$2/$1"

clang-16 -o "$cx"  "$cxf"".c"

if [ $? -eq 0 ]; then
bat --theme "Monokai Extended" --paging never "$cxf"".c"
echo "|--   O U T P U T   --|" |  bat --style grid
$cx
fi


