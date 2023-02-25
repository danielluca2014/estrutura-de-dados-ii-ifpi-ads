#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

int altura(Arv A) {
  if (A == NULL) return;
    
  int altura_esq = altura(A->esq);
  int altura_dir = altura(A->dir);

  if (altura_esq > altura_dir) {
    return altura_esq + 1;
  }
  else {
    return altura_dir + 1;
  }
}

int main() {
  Arv A = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)), 1, arv(NULL, 3, arv(NULL, 6, NULL)));
  printf("%d", altura(A));
}
