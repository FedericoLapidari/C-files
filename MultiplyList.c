/*Write a subprogram lista_espansa that receives as input the head 
of a list l1 of type nodo_freq_t and returns a new list l2 of type 
nodo_t, constructed as follows: starting from the end of l1, each 
value num is inserted into l2 a number of times equal to its 
corresponding value freq.*/

#include <stdio.h>

typedef struct nodo_freq_{
    int num;
    int freq;
    struct nodo_freq_ *next;
}nodo_freq_t;

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t *lista_espansa(nodo_freq_t *l1){
    int i;
    nodo_t *l2=NULL;
    nodo_freq_t *tmp;
    tmp=l1;
    while(tmp!=NULL){
        for(i=0; i<tmp->freq; i++){
        l2=append(*l2, tmp->num);
        }
        tmp=tmp->next;
    }
    free(tmp);

    return *l2;
}