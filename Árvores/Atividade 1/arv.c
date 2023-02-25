#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "arv.h"

#define fmt "%d"

struct arv {
    struct arv *esq;
    Item item;
    struct arv *dir;
};

Arv arv(Arv e, Item x, Arv d) {
    Arv n = (Arv)malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;
}

void emnivel (Arv A) {
    if (A == NULL) return;
    Fila F = fila(4);
    enfileira(A, F);
    while(!vaziaf(F)) {
        Arv A = desenfileira(F);
        printf(fmt, A->item);
        if(A->esq != NULL) enfileira(A->esq, F);
        if(A->dir != NULL) enfileira(A->dir, F);
    }
    destroif(&F);
}