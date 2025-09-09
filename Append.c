/*Write a subroutine that takes as input two strictly positive integers. The subroutine computes and returns a new integer obtained 
by alternating the digits of the two numbers starting from the least significant ones. If one input value has more digits than the 
other, the remaining digits are appended to the left of the resulting value. Do not worry about potential overflow. Start with the 
digit of the first of the two input values. Do not make assumptions about the size of the input data.*/

#include <stdio.h>
#define BASE 10

int append(int a, int b){
    int pot=1, ris=0;
    while(a>0||b>0){
        if(a>0){
            ris+=(a%BASE)*pot;
            pot*=BASE;
            a/=BASE;
        }
        if(b>0){
            ris+=(b%BASE)*pot;
            pot*=BASE;
            b/=BASE;
        }
    }
    return ris;
}