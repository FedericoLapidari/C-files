/*Write a subroutine that takes as input a one-dimensional array of integers (and any other parameters deemed strictly necessary) and returns the average 
of the values present, ignoring any duplicate values.*/

#include <stdio.h>

int media(int ar[], int dim){
    int i, count, sum, tmp[dim], j, countneg;
    float media;
    count=0;
    countneg=0;
    sum=0;
    for(i=0; i<dim; i++){
        tmp[i]=ar[i];
    }
    for(i=0; i<dim; i++){
        for(j=i+1; j<dim; j++){
            if(tmp[i]==tmp[j]){
                tmp[j]=0;
                countneg++;
            }
        }
    }
    for(i=0; i<dim; i++){
        sum+=tmp[i];
        count++;
    }
    count-=countneg;
    media=sum/count;
    return media;
}