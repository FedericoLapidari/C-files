/*An element of a two-dimensional array is defined as a well if it is the minimum (strictly smaller than all others) element of its column, and also the minimum of its row. Write a subroutine contapozzi that, given as input a two-dimensional array and any other parameters deemed strictly necessary, counts and returns to the caller the number of wells contained in the array. Assume RMAX and CMAX are already defined.*/

#include <stdio.h>

int contapozzi(int mat[RMAX][CMAX], int nr, int nc){
    int i, j, k, l, count, check;
    count=0;
    for(i=0; i<nr; i++){
        for(j=0; j<nc; j++){
            for(check=1, k=0; k<nr&&check==1; k++){
                if(k!=i&&mat[k][j]<=mat[i][j]){
                    check=0;
                }
            }
            for(l=0; l<nc&&check==1; l++){
                if(l!=j&&mat[i][l]<=mat[i][j]){
                    check=0;
                }
            }
            if(check==1){
                count++;
            }
        }
    }
    return count;
}