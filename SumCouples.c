/*Write a subroutine that takes as input a list of integers and modifies it by replacing each pair of consecutive 
elements with their sum. The subroutine returns the modified list. Note that if the number of elements in the list 
is odd, the last element of the list remains unchanged.*/

#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t *rimuoviProx(nodo_t*);

nodo_t *modifica(nodo_t *h){
    nodo_t *curr;
    if(h){
        for(curr=h; curr!=NULL&&curr->next!=NULL; curr=curr->next){
            curr->num+=curr->next->num;
            curr=rimuoviProx(curr);
        }
    }
    return h;
}

nodo_t *rimuoviProx(nodo_t* c){
    nodo_t *tmp;
    if(c&&c->next){
        tmp=c->next;
        c->next=c->next->next;
        free(tmp);
    }
    return c;
}