#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i, len, j, flag;
    if(argc!=1){
        for(i=1; i<argc; i++){
            len=strlen(argv[i]);
            if(len>=3){
                printf("%s", argv[i]);
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