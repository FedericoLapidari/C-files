/*Write a subroutine that, given a positive integer n as input, constructs 
and returns a new number obtained by replacing each digit in n with its 
successor: 0 is replaced with 1, 1 with 2, 2 with 3, … and finally 9 is 
replaced with 0.*/

#include <stdio.h>
#define BASE 10

int successivo(int n){
    int succ, pot;
    succ=0;
    pot=1;
    do{
    succ+=(((n%BASE)+1)%BASE)*pot;
    n/=BASE;
    pot*=BASE;
    } while(n!=0);
    

    return succ;
}