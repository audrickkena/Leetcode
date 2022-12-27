# Proposed Solutions  

## Solution 1: Simple string traversal
1. Convert input into string
2. Compare the first and last index of the string
3. Loop by increasing the first index by 1 and decreasing the last index by 1 until first index > last index

## Solution 2: Modulo operation
1. Find number of places integer
2. For loop i = value of place to 1, get the last digit of the integer and multiply it by i
3. Compare the new integer + given integer to 2 * given integer,
    - If equal, return true
    - else return false
