/*Write a subroutine that takes as parameters two lists for handling characters L1 and L2. The subroutine must return 
a NEW list L3, without modifying the other two, whose elements are the alphabetic characters with the smaller ASCII 
code between each pair of elements in the same position of L1 and L2. If the two lists have different lengths, the 
remaining elements of the longer list are copied into L3.*/

#include <stdio.h>

typedef struct nodo_{
    char c;
    struct nodo_ *next;
}nodo_t;

nodo_t *append(nodo_t *, char);

nodo_t *minorCharacter(nodo_t *h1, nodo_t *h2){
    int dim1, dim2, i;
    dim1=0;
    dim2=0;

    nodo_t *h3, *curr1, *curr2;
    h3=NULL;

        for(curr1=h1, curr2=h2; curr1!=NULL&&curr2!=NULL; curr1=curr1->next, curr2=curr2->next){
            if(curr1->c>curr2->c){
                h3=append(h3, curr2->c);
            } else{
                h3=append(h3, curr1->c);
            }
        }
        while(curr1!=NULL){
            h3=append(h3, curr1->c);
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            h3=append(h3, curr2->c);
            curr2=curr2->next;
        }
    

    return h3;
}

nodo_t *append(nodo_t *h, char ch){
    nodo_t *tmp, *tail;
    tmp=malloc(sizeof(nodo_t));
    if(tmp){
        tmp->c=ch;
        tmp->next=NULL;
        if(h==NULL){
            h=tmp;
        } else{
            for(tail=h; tail->next!=NULL; tail=tail->next);
            tail->next=tmp;
        }
    } else{
        printf("No memory available.\n");
    }

    return h;
}