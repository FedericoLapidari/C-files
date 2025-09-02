#include <stdio.h>
#include <string.h>

/*Write a function calcolaNumero that receives as input a bi-dimensional matrix of integers 'm' (declared from the caller with a number of columns equal to 'NCOL'), 
a string 'per' and any other necessary parameter. The string represents a path and it's composed by couples of characters, the first one standing for a direction
(’U’: up, ’D’: down, ’L’: left, ’R’: right) while the second one is a digit standing for the length of the movement in number of cells. The string id by hypothesis well formed.
Considering the starting point to be the cell in the top-left corner, the function follows the path described by 'per' on the matrix 'm' and calculates the sum of all the values of the cells
where it stops. At the end, the function returns the sum to the caller. If the path goes out of the borders of 'm', the function return -1.


int calcolaNumero(int m[][NCOL], int nr, int nc, char *per){
    int sum, n, i, j, k, len, segno, c, r;
    j=0;
    k=0;
    sum=m[0][0];
    len=strlen(per);
    for(i=0; i<len, sum!=-1; i+=2){
        n=per[i+1]-'0';
        if(per[i]=='U'||per[i]=='L'){
            segno=-1;
        } else{
            segno=1;
        }
        if(per[i]=='D'||per[i]=='U'){
            c=1;
            r=0;
        } else{
            c=0;
            r=1;
        }

        j=j+((n*segno)*r);
        k=k+((n*segno)*c);
        sum+=m[j][k];

        if(k<0||k>=nc||j<0||j>=nr){
            sum=-1;
        }
    }

    return sum;
}
