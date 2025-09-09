/*Write a subroutine codifica that takes as input two arrays of integers, valori and codice, along with any other 
parameters deemed strictly necessary. Each integer contained in the array codice indicates how many steps to shift 
the contents of the array valori to the right (if positive) or to the left (if negative). The subroutine computes 
and returns the sum of the values that appear at the beginning of the array (index 0) after each rotation.*/

#include <stdio.h>

int codifica(int valori[], int dim1, int codice[], int dim2){
    int sum, i, j;
    for(i=0, j=0, sum=0; i<dim2; i++){
        j+=-codice[i];
        while(j<0){
            j+=dim1;
        }
        while(j>=dim1){
            j-=dim1;
        }
        sum+=valori[j];
    }

    return sum;
}