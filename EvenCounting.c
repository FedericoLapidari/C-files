/*Write a program that receives as command-line arguments a set of text file names, each 
containing a sequence of integers of indefinite length. Among all the files containing 
only even values, the program prints the name of the one with the longest sequence of 
numbers; if there are multiple files that satisfy this condition, the program prints the 
name of the first file found. Note that files that cannot be opened should be ignored; 
furthermore, if there is no file that satisfies the given requirements, the program must 
display an appropriate error message.*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i, tmp, ok, max, coord;
    max=0;
    FILE *fp;
    coord=-1;

    for(i=1; i<argc; i++){
        fp=fopen(argv[i], "r");
        if(fp){
            count=0;
            ok=1;
            fscanf(fp, "%d", &tmp);
            while(!feof(fp)&&ok==1){
                if((tmp%2)!=0){
                    ok=0;
                } else{
                    count++;
                }
            }
            if(ok==1){
                if(count>max){
                    max=count;
                    coord=i;
                }
                fscanf(fp, "%d", &tmp);
            }
            fclose(fp);
        }
    }

    if(coord==-1){
        printf("Nessun file valido\n");
    } else{
        printf("%s\n", argv[coord]);
    }
    
    return 0;
}