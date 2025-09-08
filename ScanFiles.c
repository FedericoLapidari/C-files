/*Write a program that receives, as command-line arguments, a list of ASCII text file names. The program counts and displays:
the number of files in the list, the number of files it was unable to open, the number of empty files, the name of the file 
with the most characters and the number of characters in that file (if there are multiple files with the same maximum number 
of characters, display the name of the one that appears first in the list).*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i, count1, count2, count3, max, coord;
    char n;
    count1=0;
    count2=0;
    max=0;
    coord=1;
    FILE *fp;
    printf("Numero di file nell'elenco: %d\n", (argc-1));
    for(i=1; i<argc; i++){
        fp=fopen(argv[i], "r");
        if(fp){
            fscanf(fp, "%c", &n);
            if(!feof(fp)){
                count3=1;
                while(!feof(fp)){
                    count3++;
                    fscanf(fp, "%c", &n);
                }
                if(count3>max){
                    max=count3;
                    coord=i;
                }
            } else{
                count2++;
            }
            fclose(fp);
        } else{
            count1++;
        } 
    }
    printf("Numero di file non aperti: %d\n", count1);
    printf("Numero di file vuoti: %d\n", count2);
    printf("Il file con più caratteri è il %s, con %d caratteri\n", argv[coord], max);

    return 0;
}