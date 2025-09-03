
/*Write a subprogram that receives as input two vectors of floating-point values N and W, along with any 
other parameter deemed strictly necessary. The subprogram finds the subvector of contiguous elements of N 
that maximizes the dot product with W and returns to the caller the index in N where this subvector starts, 
along with the obtained result. If there are multiple subvectors that yield the same maximum dot product 
value, the subprogram returns the index of the first one found. If the dot product cannot be computed, the 
subprogram returns -1 and 0.0 to the caller.*/

#include <stdio.h>

void contigui(float N[], int dim1, float W[], int dim2, int *indice, int *prodotto){
    int i, j;
    float count;
    
    if(dim2>dim1){
        *indice=0;
        *prodotto=0;
    } else{
        for(j=0, *prodotto=0; j<dim2; j++){
            *prodotto+=N[j]*W[j];
            *indice=0;
        }
        for(i=1; i<=dim1-dim2; i++){
            for(j=0, count=0; j<dim2; j++){
                count+=N[i+j]*W[j];
            }
            if(count>*prodotto){
                *prodotto=count;
                *indice=i;
            }
        }
    }
    return;
}