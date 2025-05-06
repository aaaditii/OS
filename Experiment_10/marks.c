#!/bin/bash

# Taking marks input from user
echo "Enter marks for Operating Systems (OS): "
read os

echo "Enter marks for Engineering Mathematics 3 (EM3): "
read em3

echo "Enter marks for Data Structures (DS): "
read ds

# Calculating total
total=$((os + em3 + ds))

# Calculating percentage
percentage=$((total / 3))

# Display total and percentage
echo "Total Marks = $total"
echo "Percentage = $percentage%"

# Determining class
if [ $percentage -ge 75 ]; then
    echo "Result: PASS with DISTINCTION"
elif [ $percentage -ge 60 ] && [ $percentage -le 74 ]; then
    echo "Result: PASS with FIRST CLASS"
elif [ $percentage -ge 45 ] && [ $percentage -le 59 ]; then
    echo "Result: PASS"
else
    echo "Result: FAIL"
fi

