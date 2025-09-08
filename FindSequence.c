/*Write a subroutine that, given as input an array of integers and any other strictly necessary parameters, identifies the longest subsequence of consecutive elements arranged in increasing order and returns to the caller the index of the first element of that subsequence and its length. If there are multiple subsequences of equal maximum length, the subroutine returns the information related to the last one found.*/

#include <stdio.h>

void cerca(int ar[], int dim, int *max, int *indx){
    int i, j, count;
    for(i=0, *max=1, *indx=0; i<dim-1&&ar[i]>=ar[i]+1; *max++, i++);
    for(i=1; i<dim; i++){
        for(j=0, count=1; i+j<=dim-1&&ar[i+j+1]>=ar[i+j]; j++, count++);
        if(count>=*max){
            *max=count;
            *indx=i;
        }
    }

    return;
}
