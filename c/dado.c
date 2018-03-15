/* dado.c */

#include "random.h"

void dado_init()
{
  random_init();
}

int dado_lancia(int N)
{
  return random_between(1, N+1);
}
