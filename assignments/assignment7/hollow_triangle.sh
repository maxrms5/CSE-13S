#!/bin/sh
if [ "${#}" -ne 1 ] # if num of args != 2
then
    echo "Usage: hollow_triangle.sh <height>"
    exit 1
fi

if [ "${1}" -le 0 ] # if input num <= 0
then
    echo "Error: height must be a positive integer"
    exit 1
fi

num="${1}" # number of rows
i=1 # loop var

while [ "${i}" -le "${num}" ] # rows
do
    # base case
    echo -n "*" # print * without \n
    
    if [ "${i}" -eq 2 ]
    then
        echo -n "*" # append * for n = 2
    elif [ "${i}" -eq 3 ] && [ "${num}" -eq 3 ]
    then
        echo -n "**" # append ** for n = 3
    fi 

    # recursive case
    if [ "${num}" -gt 3 ] && [ "${i}" -gt 2 ]
    then
        k=1
        if [ "${i}" -eq "${num}" ]
        then
            while [ "${k}" -lt "${i}" ] # bottom row
            do
                echo -n "*"
                k=$((k+1)) # k++
            done
            echo
            exit 0
        fi

        while [ "${k}" -lt "$((i-1))" ] # spaces
        do
            echo -n " "
            k=$((k+1)) # k++
        done
        echo -n "*" # hypotenuse side
    fi
    echo # newline
    i=$((i+1)) # i++
done

exit 0