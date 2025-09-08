/*Write a program that takes as command-line input three pieces of information: the name of a text file, the number nr of rows of a two-dimensional array, and the number nc of columns of the same two-dimensional array. The program reads the data from the file in order to display a nr × nc two-dimensional array of integer values. The contents of the file are organized as follows: each pair of integers v and r in the file represents the value v of the array and the number of times it must be repeated.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, t, ncol, nrig, i, j;
    i=0;
    j=0;
    ncol=atoi(argv[2]);
    nrig=atoi(argv[3]);
    FILE *fp;
    fp=fopen(argv[1], "r");
    if(fp){
        while(fscanf(fp, "%d%d", &n, &t)==2){
            for(; t>0&&i<nrig; t--){
                printf("%3d", n);
                j++;
                if(j==ncol){
                    j=0;
                    ++i;
                    printf("\n");
                }
            }
        }
        fclose(fp);
    } else {
        printf("Impossibile aprire il file\n");
    }
    return 0;
}