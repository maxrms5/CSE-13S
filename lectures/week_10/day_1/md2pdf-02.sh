#!/bin/bash

# if test -z "${1}"
if [ -z "${1}" ] #if the length of the string is zero
then
  echo "Missing filename"
  echo "Usage: md2pdf FILE"
  exit 1
fi

file="${1}" #store the filename in the variable file

if [ ! -f "${file}.md" ] #if there is not file with the given name
then
  echo "Missing file: ${file}.md"
  exit 1
fi

pandoc -o "${file}.pdf" "${file}.md"