/*Write a subroutine that takes as input two lists of integers l1 and l2, and a non-negative integer k. The subroutine returns 1 if l1 contains (in the same order) all the elements of l2, possibly interspersed with at most k other values. Otherwise, or if at least one of the two lists is empty, the subroutine returns 0. Each list contains elements that are all distinct from one another.*/

#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

int contiene(nodo_t *h1, nodo_t *h2, int k){
    int ris=0, dim1, dim2, tmp;
    nodo_t *curr1, *curr2;
    if(h1&&h2){
        for(curr1=h1, dim1=0; curr1!=NULL; curr1=curr1->next, dim1++);
        for(curr2=h2, dim2=0; curr2!=NULL; curr2=curr2->next, dim2++);
        if(dim2<dim1){
            for(curr1=h1, curr2=h2; curr2!=NULL&&curr1->num!=curr2->num; curr1=curr1->next);
            if(curr1){
                for(curr2=curr2->next, tmp=k; curr2!=NULL&&curr1!=NULL&&tmp!=-1; curr2=curr2->next){
                    for(tmp=k ; curr1!=NULL&&tmp!=-1&&curr1->num!=curr2->num; curr1=curr1->next){
                        if(curr1->num!=curr2->num){
                            tmp--;
                        }
                    }
                }
                if(curr2==NULL){
                    ris=1;
                }
            }
        }
    }
    return ris;
}