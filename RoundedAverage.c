/*A file contains a sequence of strings made up of repetitions of the single character '*', separated by one or more spaces and line breaks. The 
strings represent a sequence of positive integers encoded in unary code. Write a subroutine that takes the name of the file, computes and returns 
to the caller the average (rounded down) of the values contained in the file, also displaying it in unary code.*/

#include <stdio.h>
#define CODE '*'

int media(char *file){
    char c;
    int count, sum, mcount, media, flag;
    flag=0;
    count=0;
    sum=0;
    mcount=0;
    FILE *fp;
    fp=fopen(file, "r");
    if(fp){
        fscanf(fp, "%c", &c);
        while(!feof(fp)){
            if(c==CODE){
                if(flag==1){
                    flag=0;
                    mcount++;
                }
                ++count;
            } else{
                sum+=count;
                count=0;
                flag=1;
            }
            fscanf(fp, "%c", &c);
        }
        sum+=count;
        mcount++;
        media=sum/mcount;
        fclose(fp);
        for(count=0; count<media; count++){
            printf("%c", CODE);
        }
        printf("\n");
    } else{
        printf("Errore di apertura file.\n");
    }

    return media;
}