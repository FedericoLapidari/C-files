/*Write a subroutine that takes as input a string (called str) and a character (called sep). The string str is guaranteed to consist of 
multiple sequences of digits (‘0’ … ‘9’) separated by a single occurrence of the character sep (assume the string is well-formed). The 
subroutine creates and returns a list of strictly positive integers (str does not contain the character ‘-’), where each element of the 
list contains an integer value corresponding to a sequence of digits present in the string str. It is not allowed to modify the input string.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BASE 10

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t *inserisciInTesta(nodo_t*, int);

nodo_t *orderedList(char *str, char sep){
    int i, n, pot;
    n=0;
    pot=1;
    nodo_t *h;
    h=NULL;
    for(i=strlen(str)-1; i>=0; i--){
        if(str[i]!=sep){
            n+=(str[i]-'0')*pot;
            pot*=BASE;
        } else{
            h=inseirisciInTesta(h, n);
            pot=1;
            n=0;
        }
    }
    h=inserisciInTesta(h, n);

    return h;
}

nodo_t *inserisciInTesta(nodo_t *h, int n){
    nodo_t *curr;
    curr=malloc(sizeof(nodo_t));
    curr->num=n;
    curr->next=h;
    h=curr;
    return h;
}

