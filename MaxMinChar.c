/*Write a subprogram minmaxchar that receives as a parameter a string vocabolo 
consisting of uppercase and lowercase alphabetic characters. The subprogram 
returns to the caller the smallest and the largest alphabetic characters in 
alphabetical order, regardless of whether they are lowercase or uppercase.
Write a program that receives as command-line arguments a sequence of strings 
and, for each of them, computes (using minmaxchar) and displays the smallest 
and the largest alphabetic characters contained in it.*/

#include <stdio.h>

void minmaxchar(char*, char*, char*);

int main(int argc, char *argv[]){
    int i;
    char *max, *min;
    for(i=1; i<=argc; i++){
        minmaxchar(argv[i], *max, *min);
        printf("%c  %c\n", *min, *max);
    }
    return 0;
}

void minmaxchar(char *vocabolo, char *max, char *min){
    int i, dif;
    char curr, max, min;
    max='A';
    min='Z'
    dif='a'-'A';
    for(i=0; *vocabolo!='\0'; i++){
        curr=vocabolo[i];
        if(curr>='a'){
            curr=vocabolo[i]-dif;
        }
        if(curr>max){
            *max=vocabolo[i];
            if(*max>='a'){
                max=*max-dif;
            } else{
                max=*max;
            }
        }
        if(curr<min){
            *min=vocabolo[i];
            if(*min>='a'){
                min=*min-dif;
            } else{
                min=*min;
            }
        }
        
    }
    return;

}
