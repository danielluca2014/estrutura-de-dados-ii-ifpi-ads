#include <stdio.h>
#include <stdlib.h>
#include "arv.h"

int main() {
  Arv r = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)), 1, arv(NULL, 3, arv(NULL, 6, NULL)));
	emnivel(r);
}
