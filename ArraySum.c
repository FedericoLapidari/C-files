/*Write a subroutine that takes as input an array of integers v, an integer k, and any other parameters deemed necessary. The subroutine computes and returns the maximum sum of k contiguous elements of the array. If the number of elements in the array is less than k, the subroutine returns the sum of all the elements in the array.*/

#include <stdio.h>

int somma(int v[], int dim, int k){
    int count, max, i, j;
    max=0;
    if(dim<k){
        max=0;
        for(i=0; i<k; i++){
            max+=v[i];
        }
        for(i=1; i<=dim-k; i++){
            for(count=0, j=0; j<k; j++){
                count+=v[i+j];
            }
            if(count>max){
                max=count;
            }
        }
    } else{
        for(i=0; i<dim; i++){
            max+=v[i];
        }
    }

    return max;
}