/*Write a subroutine that, given as input a string **s** containing a value in base **b**, computes and returns to the caller the minimum base to which 
the string belongs. The string will contain only numeric characters and uppercase alphabetic characters*/

#include <stdio.h>

int minBase(char *s){
    int i, max, n, base;
    max=0;
    for(i=0; s[i]!='\0'; i++){
        if(s[i]>='A'&&s[i]<='Z'){
            n+=10+(s[i]-'A');
        } else{
            if(s[i]>='0'&&s[i]<='9')
                n=s[i]-'0';
        }
        if(n>max){
            max=n;
        }
    }
    base=max+1;
    return base;
}