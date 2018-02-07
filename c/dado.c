/* rand.c */

/* lancia un dado a N facce */

/* compilazione ed esecuzione:
 *
 * $ make dado
 * $ ./dado
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int N = 0;

  /* inizializza generatore numeri pseudocasuali */
  srand( time(NULL) );

  printf("Lancia un dado a N facce\n");
  do {
    printf("N = ");
    scanf("%d", &N);
  } while (N <= 0);
  
  printf("Estraggo ... %d\n\n", 1 + rand() % N);

  return 0;
}
