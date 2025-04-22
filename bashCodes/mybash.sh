#!/bin/bash
# This script demonstrates the use of variables, loops, and conditionals in bash

# Define a variable
greeting="Hello, World!"
# Print the greeting
echo $greeting
# Define an array
fruits=("apple" "banana" "cherry")
# Print the first element of the array
echo "The first fruit is: ${fruits[0]}"

# Print the array elements
for fruit in "${fruits[@]}"; do
    echo $fruit
done

# Define a function
function greet() {
    local name=$1
    local name2=$2
    echo "Hello, $name!"
    echo "Hello, $name2!"
}
# Call the function with an argument
greet "Alice" "Bob"

# Conditional statement
if [ -f "mybash.sh" ]; then
    echo "The file mybash.sh exists."
else
    echo "The file mybash.sh does not exist."
fi
