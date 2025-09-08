/*Write a subroutine that takes as parameters a string seq, a character ch, and a positive integer dir. The subroutine 
returns a new string that contains only a part of seq related to the character ch: if dir is even, it returns the part 
of the string that precedes the first occurrence of ch; if dir is odd, it returns the part of the string that follows 
the last occurrence of ch. The character ch is guaranteed to be present in the string seq.*/

#include <stdio.h>
#include <string.h>

char *partial(char *seq, char ch, int dir){
    int i, dim, j;
    char *s;
    if(dir%2==0){
        for(i=0; seq[i]!=ch; i++);
        s=(char*)malloc(sizeof(char)*(i+1));
        if(s){
            for(j=0; j<i; j++){
                s[j]=seq[j];
            }
            s[i]='\0';
            
        } else {
            printf("Memoria piena\n");
        }
    } else{
        for(i=strlen(seq)-1; seq[i]!=ch; i--);
        s=(char*)malloc(sizeof(char)*(strlen(seq)-i+1));
        if(s){
            ++i;
            for(j=0; (i+j)<strlen(seq); j++){
                s[j]=seq[i+j];
            }
            s[j]='\0';
        } else{
            printf("Memoria piena\n");
        }
    }

    return s;
}
