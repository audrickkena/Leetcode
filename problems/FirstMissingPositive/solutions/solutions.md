# Proposed Solutions

## Solution 1: Using sets
1. Put all the positive integers in given array in a set(unique, sorted)
2. Loop through set, comparing each element to a incrementing value starting from 1.
    - If element is more than the value, the value is the first missing positive
    - else, the first missing positive is the last positive in the set + 1