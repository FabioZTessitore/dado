/* dado.h */

/* Lancia un dado a N facce */

/* Dipende dal modulo "random" */

#ifndef DADO_H
#define DADO_H

/* dado_init():   inizializza il modulo dado,
 *                da richiamare prima di ogni altra funzione del modulo.
 */
void dado_init();

/* dado_lancia(): lancia un dado a N facce */
int dado_lancia(int N);

#endif
