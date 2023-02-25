#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

int folhas(Arv A) {
  if (A == NULL) return;
  if (A->esq == NULL && A->dir == NULL) return 1;
  return folhas(A->esq) + folhas(A->dir);
}

int main() {
  Arv A = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)), 1, arv(NULL, 3, arv(NULL, 6, NULL)));
  printf("%d", folhas(A));
}