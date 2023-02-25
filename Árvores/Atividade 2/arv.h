#include <stdio.h>
#include <stdlib.h>

#define fmt "%d"

typedef int Item;
typedef struct arv *Arv;

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