/*Given a two-dimensional array of integers, an element is said to be a peak if it is strictly greater than all of its 8 neighbors (all 
8 neighbors must exist!). Write a subroutine that, given as input a two-dimensional array of integers (defined in the caller with a number 
of columns specified via a #define NCOL ...) and any other parameters deemed strictly necessary, computes and returns to the caller the 
indices of the peak with the maximum value. If multiple peaks with the same maximum value exist, the coordinates of the first one found 
are returned; furthermore, if no peak exists, the values -1 -1 must be returned.*/

void picco(int mat[][NCOL], int dimr, int dimc, int *x, int *y){
    int max, i, j, k, l, flag, found;
    *x=-1;
    *y=-1;
    found=0;

    for(i=1; i<dimr-1; i++){
        for(j=1; j<dimc-1; j++){
            for(k=i-1, flag=0; k<i+2&&flag==0; k++){
                for(l=j-1; l<j+2&&flag==0; l++){
                    if(l!=j||k!=i){
                        if(mat[k][l]>=mat[i][j]){
                            flag=1;
                        }
                    }
                }
            }
            if(flag==0){
                if(found==0){
                    max=mat[i][j];
                    found=1;
                    *x=i;
                    *y=j;
                } else{
                    if(mat[i][j]>max){
                        max=mat[i][j];
                        *x=i;
                        *y=j;
                    }
                }
            }
        }
    }
    return;
}