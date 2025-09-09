/*Write a subroutine that, given as input a string consisting of an even number of characters, computes and returns to the caller the 
character that appears only in the first half of the string or only in the second half of the string. Such a character is guaranteed 
to exist and to be unique.
Write a program that takes as command-line arguments a sequence of strings (the number of which is not known) and, for each of them, 
displays the character that appears only in the first half or in the second half of the string.*/

#include <stdio.h>
#include <string.h>

char unico(char *);

int main(int argc, char *argv[]){
    int i;
    for(i=1; i<argc; i++){
        printf("Il carattere è %c\n", unico(argv[i]));
    }
    return 0;
}

char unico(char *s){
    int i, j, flag, dim;
    char c;
    flag=0;
    dim=strlen(s);
    for(i=0; i<dim/2&&flag==0; i++){
        for(j=dim/2; s[j]!='\0'&&s[i]!=s[j]; j++);
        if(s[j]=='\0'){
            c=s[i];
            flag=1;
        }
    }
    if(flag==0){
        for(j=dim/2; s[j]!='\0'&&flag==0; j++){
            for(i=0; i<dim/2&&s[j]!=s[i]; i++);
            if(i==dim/2){
                c=s[j];
                flag=1;
            }
        }
    }

    return c;
}