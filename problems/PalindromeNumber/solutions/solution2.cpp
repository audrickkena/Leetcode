#include <cstdint>

bool isPalindrome(int_fast64_t x) {
    int_fast64_t y = 0;
    int_fast64_t cpOfX = x;
    int_fast64_t place = 1;
    while(x / place > 0){
        place *= 10;
    }
    place /= 10;
    for(int_fast64_t i = place; i >= 1; i /= 10){
        y += (cpOfX % 10) * i;
        cpOfX = cpOfX / 10;
    }
    if(x + y == 2 * x){
        return true;
    }
    return false;
}