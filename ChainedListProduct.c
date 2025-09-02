/*Write a subroutine manipolaLista that takes as input a dynamic singly linked list 
of integers l. The subroutine returns the list l modified as follows: in the last node, 
store the product of the second-to-last node and the last node; in the second-to-last 
node, store the product of the third-to-last node and the second-to-last node; and so 
on. The first node remains unchanged.*/


#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
} nodo_t;

nodo_t *append(nodo_t, int);
nodo_t *delete(nodo_t);

nodo_t* manipolaLista(nodo_t *l){
    nodo_t *tmp, *curr;
    tmp=NULL;
    if(l!=NULL){
        tmp=append(tmp, l->num);
        for(curr=l; curr->next!=NULL; curr=curr->next){
            tmp=append(tmp, curr->num*curr->next->num);
        }
    }
    l=delete(l);
    return tmp;
}

nodo_t* append(nodo_t *l, int n){
    nodo_t *prec, *tmp;
    tmp=malloc(sizeof(nodo_t));
    if(tmp!=NULL){
        tmp->next=NULL;
        tmp->num=n;
        if(l==NULL){
            l=tmp;
        } else{
            for(prec=l; prec->next!=NULL; prec=prec->next);
            prec->next=tmp;
        }
    } else{
        printf("No memory available\n");
    }
    return l;
}

nodo_t *delete(nodo_t *l){
    nodo_t *tmp;
    while(l!=NULL){
        tmp=l;
        l=l->next;
        free(tmp);
    }
    return NULL;

}
