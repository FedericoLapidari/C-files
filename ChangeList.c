/*Write a subroutine manipolaLista that, given a list of integers as 
input, modifies it by deleting the negative numbers and duplicating 
the positive even numbers, then returns the list to the caller.*/

#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t *manipolaLista(nodo_t *l){
    nodo_t *curr, *prec, *tmp;
    curr=l;
    prec=NULL;
    while(curr;){
        if(curr->num>=0&&curr->num%2==1){
            prec=curr;
            curr=curr->next;
        }
        if(curr->num<0){
            tmp=curr;
            if(prec==NULL){
                curr=curr->next;
                l=curr;
            } else{
            curr=curr->next;
            prec->next=curr;
            }
            free(tmp);
        }
        if(curr->num%2==0){
            tmp = (nodo_t*) malloc(sizeof(nodo_t));
            if(tmp){
                tmp->num = curr->num;
                tmp->next = curr->next;
                curr->next = tmp;
                prec = curr->next;
                curr = curr->next->next;
            }
        } else{
            prec = curr;    
            curr = curr->next;
        }
    }
    return l;
}