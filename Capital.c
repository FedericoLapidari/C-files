/*Write a subroutine that, given a string as input, returns a new string in which all words start with an uppercase letter and are followed by lowercase letters.*/

#include <stdio.h>
#include <string.h>
#define DIFF ('a'-'A')

char *maiuscole(char *s){
    int i, check, len;
    char *nuova;
    len=strlen(s);
    nuova=malloc(sizeof(char)*len);
    check=0;
    for(i=0; i<len; i++){
        if(s[i]>='a'&&s[i]<='z'&&check==0){
            nuova[i]=s[i]-DIFF;
            check=1;
        } else{
            if(s[i]>='A'&&s[i]<='Z'&&check==1){
                nuova[i]=s[i]+DIFF;
            } else{
                nuova[i]=s[i];
                if(s[i]<'A'||s[i]>'z'||(s[i]>'Z'&&s[i]<'a')){
                    check=0;
                }
            }
        }   
    }
    return nuova;
}
