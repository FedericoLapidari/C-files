/*Write a program that receives a sequence of strings as command-line arguments. For each string sI of at least 3
characters, the program searches for the first subsequent string sJ such that the last two letters of sI are identical 
(and in the same order) to the first two letters of sJ. The program then prints sI and sJ separated by a space. If 
none of the strings following sI satisfies this condition, the program prints only sI. Finally, if sI has fewer than 
3 characters, that string is not printed at all.*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i, len, j, flag;
    if(argc!=1){
        for(i=1; i<argc; i++){
            len=strlen(argv[i]);
            if(len>=3){
                printf("%s ", argv[i]);
                for(j=i+1, flag=0; j<argc-i, flag!=1; j++){
                    if(argv[i][len-2]==argv[j][0]&&argv[i][dim-1]==argv[j][1]){
                        flag=1;
                        printf("%s", argv[j]);
                    }
                }
                printf("\n");
            }
        }
    } else{
        printf("No valid input.\n");
    }
    return 0;

}
