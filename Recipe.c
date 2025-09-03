/*Write a subprogram that receives as parameters the data structures of a recipe and of a pantry.
The subprogram returns the maximum number of cakes that can be prepared with the ingredients available
in the pantry.*/

#include <stdio.h>
#include <string.h>

#define MAXS 100
#define MAXI_RICETTA 20
#define MAXI_CREDENZA 200

typedef struct {
    char nome[MAXS+1];
    int quantita;
} ingrediente_t;

typedef struct {
    ingrediente_t ingredienti[MAXI_CREDENZA];
    int n_ingredienti;
} credenza_t;

typedef struct {
    char descrizione[MAXS+1];
    ingrediente_t ingredienti[MAXI_RICETTA];
    int n_ingredienti;
} ricetta_t;

int maxNum(ricetta_t *ric, credenza_t *cred){
    int i, j, ok, count;
    count = 0;
    ok = 1;
    while (ok == 1) {
        for (i = 0, ok = 1; i < ric->n_ingredienti && ok == 1; i++) {
            ok = 0;
            for (j = 0; j < cred->n_ingredienti; j++) {
                if (strcmp(ric->ingredienti[i].nome, cred->ingredienti[j].nome) == 0) {
                    if (ric->ingredienti[i].quantita <= cred->ingredienti[j].quantita) {
                        ok = 1;
                        cred->ingredienti[j].quantita -= ric->ingredienti[i].quantita;
                    }
                    break;
                }
            }
            if (j == cred->n_ingredienti) {
                ok = 0;
            }
        }
        if (ok == 1) {
            count++;
        }
    }
    return count;
}