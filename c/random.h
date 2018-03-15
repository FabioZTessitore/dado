/* random.h */

/* Generazione di numeri pseudocasuali */

#ifndef RANDOM_H
#define RANDOM_H

/* random_init(): inizializza il modulo,
 *                da richiamare prima di ogni altra funzione del modulo.
 */
void random_init();


/* random_between():  estrae un numero nell'intervallo [min, max[
 */
int random_between(int min, int max);

#endif
