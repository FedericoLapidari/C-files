/*Scrivere un sottoprogramma che riceve in ingresso una lista per la gestione dei numeri interi e la modifica nel seguente modo: per ogni tripletta di valori, se il valore centrale è strettamente maggiore degli altri due, viene eliminato. Si noti che le triplette non sono sovrapposte e il numero degli elementi nella lista di partenza non è necessariamente multiplo di 3. Nel caso in cui gli ultimi elementi non formino una tripletta, non viene fatta alcuna operazione su questi. Non sono disponibili sottoprogrammi che manipolano liste: nel caso vengano utilizzati, devono essere sviluppati*/

#include <stdio.h>

typedef struct nodo_{
    int num; 
    struct nodo_ *next;
}nodo_t;


void modifica(nodo_t *h){
    int i;
    nodo_t *curr, *prec, *tmp;
    if(h){
        prec=h;
        curr=h->next;
        while(prec&&curr&&curr->next){
            if(curr->num>prec->num&&curr->num>curr->next->num){
                tmp=curr;
                prec->next=curr->next;
                curr=curr->next;
                free(tmp);
                curr=curr->next->next;
                prec=prec->next->next;
            } else{
                for(i=0; i<3; i++){
                    prec=prec->next;
                    curr=curr->next;
                }
            }
        }
    }
    return;
}