#!/bin/bash 
clear
full_filename="$1"

filename_without_extension="${full_filename%.c}"

c_directory="/home/rajnish/data/codes/c"

c_file=$(find "$c_directory" -name "$full_filename" 2>/dev/null)

lvim $full_filename && clang-17 -o "$c_directory/cx/$filename_without_extension" "$c_file" -Wall 

 if [ $? -eq 0 ]; then

                bat --style=full --theme "Monokai Extended" --paging never "$c_file"
                printf "\e[1;33m |--   O U T P U T   --|" |  bat --style grid
                read -s -n1
                $filename_without_extension 
                exit_code_of_c_ex="$?"
                printf "\n\n\n\n"
                printf "\e[0;34m program exited with code : \e[1;33m $exit_code_of_c_ex " | bat --style=grid && read -s -n1

fi
  


