/*Write a subroutine that takes as input a string car, an array rip of non-negative integers (it is guaranteed to be so), and any other parameters deemed strictly necessary. The string and the array have the same number of significant elements. The subroutine returns a new string created as follows: each character at position i of car is appended to the end of the new string a number of times equal to the numeric value at the corresponding position i of the array rip.*/


#include <stdio.h>
#include <string.h>
char *assemble(char *car, int *rip){
    int dim, i, dim1, j, k;
    k=0;
    dim=strlen(car);
    dim1=0;
    for(i=0; i<dim; i++){
            dim1+=rip[i];
        }
    char *str=malloc(sizeof(char)*(dim1+1));
    if(*car!='\0'){
        for(i=0; i<dim; i++){
            for(j=0; j<rip[i]; j++){
                str[k+j]=car[i];
            }
            k+=j;
        }
        str[k]='\0';
    }
    return str;
}