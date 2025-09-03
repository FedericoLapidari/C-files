/*Write a subprogram that receives as input two positive integers a and b.
The subprogram returns 1 if b appears within a, and 0 otherwise.
Note: no assumptions should be made about the maximum size of a and b.*/

#include <stdio.h>
#define BASE 10

int compare(int a, int b){
    int ris, tmp, tmp1;
    ris=0;
    
    if(b>a){
        printf("inserire valori validi\n");
    } else{
        for(;a!=0&&ris==0; a/=BASE){
            for(tmp=a, tmp1=b; tmp1!=0&&tmp%BASE==tmp1%BASE; tmp/=BASE, tmp1/=BASE);
            if(tmp1==0){
                ris=1;
            }
        }
    }

    return ris;
}