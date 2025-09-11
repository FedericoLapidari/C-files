/*A number is strictly monotonically decreasing if its digits are arranged in strictly increasing order from right to left. For example, 9540, 8, and 321 are monotonically decreasing, while 44 and 6501 are not. Write a subroutine monotono that, given as input a strictly positive integer, returns 1 to the caller if the number is monotonically decreasing, 0 otherwise, and in any case also provides the caller with the number of digits that make up the integer.*/

#include <stdio.h>
#define BASE 10

void monotono(int n, int *ok, int *count){
    int prec;
    if(n>0){
        *count=1;
        *ok=1;
        prec=n%BASE;
        n/=BASE;
        while(n!=0){
            (*count)++;
            if((n%BASE)<=prec){
                *ok=0;
            }
            prec=n%BASE;
            n/=BASE;
        }
    }

    return;
}