#include <stdio.h>
#define BASE 10

int SingleDigit(int n){
    int count, tmp;
    count=0;
    while(n!=0){
        count+=(n%BASE);
        n/=BASE;
    }
    tmp=0;
    while(count>=BASE){
        tmp+=count%BASE;
        count/=BASE;
    }

    if(tmp!=0){
        count=tmp;
    }

    return count;
    
}