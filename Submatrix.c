/*Write a subroutine cercaSottomatrice that takes as parameters an integer matrix m (declared in the caller 
with NCOL columns) and three integers i, j, and dim, plus any other parameter deemed strictly necessary. 
The three numbers i, j, and dim identify a square submatrix of m, called subm; specifically, i and j are the 
coordinates of the top-left cell of subm in m, and dim is its size.
The subroutine checks whether there exists another submatrix of m that differs from subm in at most two
values, and returns to the caller the coordinates of its top-left cell. Note that the submatrix being searched 
for may partially overlap subm; furthermore, if multiple submatrices satisfy the requirements, the subroutine 
returns the coordinates of the first one encountered. If no submatrix satisfies the requirements, the subroutine 
returns -1, -1.*/


#include <stdio.h>
#define MAX 2

void cercaSottomatrice(int m[][NCOL], int nr, int nc, int i, int j, int dim, int *x, int *y){
    int k, l, count, n, o;
    *x=-1;
    *y=-1;
    if(i<=nr-dim&&j<=nc-dim&&dim>0){
        for(k=0; k<=(nr-dim)&&*x==-1; k++){
            for(l=0; l<=(nc-dim)&&*x==-1; l++){
                if(k!=i||l!=j){
                    count=0;
                    for(n=0; n<dim&&count<=MAX; n++){
                        for(o=0; o<dim&&count<=MAX;o++){
                            if(m[k+n][l+o]!=m[i+n][j+o]){
                                count++;
                            }
                        }
                    }
                    if(count<=MAX){
                        *x=k;
                        *y=l;
                    }
                }
            }
        }
    }
    return;
}