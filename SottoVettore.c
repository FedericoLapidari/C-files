/*Write a subprogram individua_sottovettore that receives as input a vector of 
floating-point values vet, an integer n, a floating-point number sum, and any 
other parameter deemed strictly necessary. The subprogram returns the index of 
the first element of the subvector of n contiguous elements of vet whose sum is 
equal to sum. If there are multiple such subvectors, the subprogram returns the 
largest index. If no subvector satisfies the condition, the subprogram returns -1.*/

#include <stdio.h>

int individua_sottovettore(float vet[], int dim, float sum, int n){
    int i, j, ris;
    float count;
    ris=-1;
    for(i=0; i+n<=dim; i++){
        for(j=0, count=0; j<n; j++){
            count+=ar[i+j];
        }
        if(count==sum){
            ris=i;
        }
    }
    return ris;
}