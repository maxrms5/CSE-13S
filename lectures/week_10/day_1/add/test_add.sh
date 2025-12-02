#!/bin/bash

cc add.c -o add
./add 3 4 > out.txt

diff expected.txt out.txt
if [ "${?}" -eq 0 ]
then 
  echo "Test passed!"
else echo "Test failed!"
fi