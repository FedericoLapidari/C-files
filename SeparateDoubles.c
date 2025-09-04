/*Define the data type to represent a dynamic list of integers, then write a subroutine that 
takes as input a list l. The subroutine modifies and returns the list l by inserting a new node 
containing the value 0 between each pair of consecutive elements where the first is double the second.*/

#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t append(nodo_t *, int);

nodo_t modificaLista(nodo_t *l){
    nodo_t *tmp, *curr;
    tmp=NULL;
    for(curr=l; curr->next!=NULL; curr=curr->next){
        append(tmp, curr->num);
        if(curr->num==(curr->next->num)*2){
        append(tmp, 0);
        }
    }
    l=tmp;

    return l;
}

nodo_t append(nodo_t *l, int n){
    nodo_t *tmp;
    tmp->num=n;
    tmp->next=NULL;
    l->next=tmp;
    free(tmp);
}