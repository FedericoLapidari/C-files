/*Write a program that takes as command-line arguments a list of text file 
names, each containing a series of integers. The program must count and display: 
(1) the number of files in the list, (2) the number of files it successfully opened, 
(3) the number of empty files, and (4) the name of the file with the most values. 
If multiple files have the same maximum number of values, display the name of the 
one that appears earlier in the list.*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i, count, count1, max, coord, n, count3;
    printf("There are %d files\n", --argc);
    FILE *fp;
    for(i=1, count=0, count1=0, max=0; i<(argc); i++){
        fp=fopen(argv[i], "r");
        if(fp){
            count++;
            count3=0;
            fscanf(fp, "%d", &n);
            if(feof(fp)){
                count1++;
            } else{
                while(!feof(fp)){
                    fscanf(fp, "%d", &n);
                    count3++;
                }
                if(count3>max){
                    max=count3;
                    coord=i;
                }
            }
            fclose(fp);
        
        }
    }
    printf("Successfully opened %d files\n", count);
    printf("%d empty files\n", count1);
    if(max==0){
        printf("All the files are empty or couldn't be opened\n");
    } else{
        printf("The file with most numbers is %s", argv[coord]);
    }
    printf("\n");
    return 0;
}