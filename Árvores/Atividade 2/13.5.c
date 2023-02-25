#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

int tem(Arv A, int x) {
  if (A == NULL) return;

  if (A->item == x) {
    return 1;

  } else {
    if (tem(A->esq, x) || tem(A->dir, x)) {
      return 1;
    } 
  }
}

int main() {
  Arv A = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)), 1, arv(NULL, 3, arv(NULL, 6, NULL)));
  printf("%d", tem(A, 9));
}