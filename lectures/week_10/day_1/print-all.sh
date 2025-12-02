#!/bin/bash

print-func() {
  if [ "$#" -eq 0 ] 
  then
    echo "No arguments were passed to the function."
    return
  fi

  # Loop through all the arguments passed to the function
  for arg in "${@}" 
  do
    echo "${arg}" # Print each argument on a new line
  done
}

print-func  #not passing any arguments

name="Kriti"
print-func "hello" "world" "how are you ${name}?"

print-func /bin/*grep 

print-func {one,two,three}
