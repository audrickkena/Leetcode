# Proposed Solutions

## Solution 1: Using a variable (`carry`) to store carryover values and using modulo operator to get what to store in new node
1. Implement a do-while loop(execute code before checking for condition) where `l3.value(l3 is the new node) = (l1.value + l2.value + carry)%10`
2. `carry` would then increment based on `(l1.value + l2.value + carry)/10` *this uses integer division, not float or double
3. If the do-while condition(where both of the listnodes' next pointer is not a null pointer) returns false, check which listnode has the null pointer.
    - if `l1.next` has null pointer, then next values of `l3.next` would be `(l2.value + carry)%10`
    - if `l2.next` has null pointer, then next values of `l3.next` would be `(l1.value + carry)%10`
    - if both have null pointer, then the next value of `l3.next` would be `carry`
4. Return the first node of `l3`