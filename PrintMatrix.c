/*Write a subroutine that, given as input a positive integer val (it is guaranteed to be so) and a character car, displays val in the following format: for each digit, starting from the most significant one, print on a separate line a number of characters car equal to the value of that digit.*/

#define BASE 10

#include <stdio.h>

void visualizza(int val, char car){
    int i, pot;
    pot=1;
    while(val/pot>=BASE){
        pot*=BASE;
    }
    while(pot!=0){
        for(i=0; i<(val/pot)%BASE; i++){
            printf("%c", car);
        }
        printf("\n");
        pot/=BASE;
    }
}