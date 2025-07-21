#!/bin/bash 
clear
full_filename="$1"

filename_without_extension="${full_filename%.c}"

c_dir="/home/rsh/c"

c_file=$(find "$c_dir" -name "$full_filename" 2>/dev/null)

echo file find

mkdir -p $c_dir/cx

nvim $full_filename && clang "$c_file" -o "$c_dir/cx/$filename_without_extension" 

 if [ $? -eq 0 ]; then

                bat --style=full --theme "Monokai Extended" --paging never "$c_file"
                printf "\e[1;33m |--   O U T P U T   --|" |  bat --style grid
                read -s -n1
                $c_dir/cx/$filename_without_extension 
                exit_code_of_c_ex="$?"
                printf "\n\n\n\n"
                printf "\e[0;34mprogram exited with code :\e[1;33m $exit_code_of_c_ex " | bat --style=grid && read -s -n1

fi
  


