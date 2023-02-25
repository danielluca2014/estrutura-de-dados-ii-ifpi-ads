#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

int nos(Arv A) {
    if (A == NULL) return;
    return 1 + nos(A->esq) + nos(A->dir);
}

int main() {
  Arv A = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)), 1, arv(NULL, 3, arv(NULL, 6, NULL)));
  printf("%d", nos(A));
}