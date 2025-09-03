/*Write a subprogram combina that, given as input two positive integers a and b, 
computes a new integer c as follows: Starting from the right, each digit of c is 
calculated by performing the sum modulo 10 of the two digits of a and b in the 
same position. If one of the two input numbers has more digits than the other, the 
excess digits are placed directly on the left side of the new number.*/

#include <stdio.h>
#define BASE 10

int combina(int a, int b){
    int c, pot;
    pot=1;
    c=0;
    while(a>0||b>0){
        n=a%(BASE)+b%(BASE);
        if(n/BASE!=0){
            n%=BASE;
        }
        c+=n*pot;
        pot*=BASE;
        a/=BASE;
        b/=BASE;
    }
    
    return c;
}