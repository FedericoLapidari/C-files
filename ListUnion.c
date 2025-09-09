/*Write a subroutine setunione that takes as input two lists of integers sorted in ascending order and returns a new list containing the union of the 
values from the two lists, without duplicates, also sorted in ascending order.*/

#include <stdio.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

nodo_t *setunione(nodo_t *h1, nodo_t *h2) {
    nodo_t *l = NULL;
    int last = 0; 
    int has_last = 0; 

    while (h1 && h2) {
        int v;
        if (h1->num < h2->num) {
            v = h1->num;
            h1 = h1->next;
        } else if (h2->num < h1->num) {
            v = h2->num;
            h2 = h2->next;
        } else { 
            v = h1->num;
            h1 = h1->next;
            h2 = h2->next;
        }
        if (!has_last || v != last) {
            l = inserisciInCoda(l, v);
            last = v;
            has_last = 1;
        }
    }

    while (h1) {
        if (!has_last || h1->num != last) {
            l = inserisciInCoda(l, h1->num);
            last = h1->num;
            has_last = 1;
        }
        h1 = h1->next;
    }
    while (h2) {
        if (!has_last || h2->num != last) {
            l = inserisciInCoda(l, h2->num);
            last = h2->num;
            has_last = 1;
        }
        h2 = h2->next;
    }

    return l;
}
