/* main.c */

/* lancia un dado a N facce (N > 1) */

/* compilazione ed esecuzione:
 *
 * $ make
 * $ ./main
 */

#include <stdio.h>
#include "dado.h"

int main()
{
  int N = 0;

  /* inizializza modulo dado */
  dado_init();

  printf("Lancia un dado a N facce\n");
  do {
    printf("N = ");
    scanf("%d", &N);
  } while (N <= 1);
  
  printf("Estraggo ... %d\n\n", dado_lancia(N));

  return 0;
}
