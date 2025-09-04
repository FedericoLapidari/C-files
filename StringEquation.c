/*Write a subroutine that takes as input a string representing an expression composed 
of additions and subtractions of values in base 8. The string therefore consists of a 
sequence of substrings, each containing only the characters from ‘0’ to ‘7’ and 
representing a value in base 8; the various substrings are separated by a single 
character ‘+’ or ‘-’ (assume that the string is well-formed according to the given 
description). The subroutine computes and returns the result of the expression 
represented in the string, giving the result in base 10 as an integer.*/

#include <stdio.h>
#include <string.h>

#define BASE 8

int expression(char *s){
    int i, dim, num, pot, count;
    pot=1;
    dim=strlen(s);
    num=0;
    count=0;
    for(i=dim-1; i>=0; i--){
        if(s[i]>='o'&&s[i]<='7'){
            num+=(s[i]-'0')*BASE;
            pot*=BASE;
        } else{
            if(s[i]=='-'){
                count-=num;
            } else{
                count+=num;
            }
            pot=1;
            num=0;
        }
    }
    ris+=num;
    
    return count;
}