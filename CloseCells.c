/*Write a subroutine that takes as a parameter a two-dimensional array of non-negative integers, declared by the caller with DIMC columns, along with any other parameters deemed strictly necessary. The subroutine displays the coordinates of all positions for which the value is equal to the sum of all its neighbors.*/

#include <stdio.h>

void closeCells(int m[][DIMC], int dimx, int dimy){
    int sum, i, j, k, l, count;
    for(i=0; i<dimx; i++){
        for(j=0; j<dimy; j++){
            for(count=0, k=i-1; k<i+2; k++){
                for(l=j-1; l<j+2; l++){
                    if((k!=i||l!=j)&&k>=0&&l>=0){
                        count+=m[k][l];
                    }
                }
                if(count==m[i][j]){
                    printf("%dX %dY", i, j);
                }
            }
        }
    }
}