/*Write a subroutine that, given an integer as input, returns a single-digit integer corresponding to the sum 
of the digits that make up the input value, repeated also on intermediate values until the sum results in a
single-digit number. Assume that the input value can be arbitrarily large (without causing overflow) and is 
guaranteed to be positive.*/

#include <stdio.h>
#define BASE 10

int SingleDigit(int n){
    int ris;
    do {
        ris = 0;
        while (n > 0) {
            ris += n % BASE;
            n /= BASE;
        }
        n = ris;
    } while (ris >= BASE);
    return ris;
    
}
