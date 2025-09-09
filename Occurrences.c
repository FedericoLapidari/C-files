/*Write a subroutine that takes as parameters two strings, called sequence and template, both consisting only of alphabetic characters (both lowercase 
and uppercase); in addition, template may also contain zero or more occurrences of the special character ‘_’. Assuming that the special character ‘_’ can 
be considered equal to any alphabetic character, the subroutine counts and returns to the caller how many times template appears in sequence.*/

#include <stdio.h>
#include <string.h>

int volte(char *sequenza, char *template){
    int i, j, count=0;
    if(*sequenza!='\0'&&*template!='\0'){
        for(i=0; sequenza[i]!='\0'; i++){
            for(j=0; (sequenza[i]==sequenza[j]||sequenza[j]=='_')&&sequenza[j]!='\0'&&sequenza[i]!='\0'; i++, j++);
            if(sequenza[j]=='\0'){
                count++;
            }
        }
    }
    return count;
}