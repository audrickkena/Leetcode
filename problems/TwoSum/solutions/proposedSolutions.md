# Proposed Solutions  

## Solution 1: Simple brute force 
- nested for loop, outer loop for x to start with, inner loop to find y where y + x = target  

## Solution 2: Hash map
1. Store all values in hash map, using values as the key and their original index as the value
2. Loop through the given array to get x to start with, do target - x = y, where y is a possible key to search in the hash map
3. If y exists, return index of x and value of y, else continue through the given array