/*Write a program that asks the user for the name of a series of text files (each with at most 30 characters in the name) present 
in the file system, and for each of them counts the number of characters contained in the file. The program terminates when the 
user provides the name of a file that cannot be accessed, and then displays the total number of characters across all the files 
that were accessed, as well as the name of the file with the most characters.*/

#include <stdio.h>
#include <string.h>

#define MAXDIM 30

int main(){
    char nome[MAXDIM+1], c, maxFile[MAXDIM+1];
    int count, max, tot;
    tot=0;
    max=0;
    *maxFile ='\0';
    FILE *fp;
    scanf("%s", nome);
    fp=fopen(nome, "r");
    while(fp){
        count=0;
        fscanf(fp, "%c", &c);
        while(!feof(fp)){
            count++;
            fscanf(fp, "%c", &c);
        }
        tot+=count;
        if(count>max){
            max=count;
            strncpy(maxFile, nome, MAXDIM+1);
        }
        fclose(fp);
        scanf("%s", nome);
    }
    printf("Il numero totale di caratteri è %d\n", tot);
    if(*maxFile!='\0'){
        printf("Il file col maggior numero di caratteri è %s\n", maxFile);
    }

    return 0;
}