#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shellSort.h"

void shell_sort(int *array, int array_size, char *sequence)
{
    int index, aux_index, current_value;
    int incr, cut; // melhorar 'cut' para outro naming

    if (strcmp(sequence, "shell") == 0) {
        incr = set_shell_incr(array_size);
        cut = 2;
    } else if (strcmp(sequence, "knuth") == 0) {
        incr = set_knuth_incr(array_size);
        cut = 3;
    } else {
        int ciura_sequence[CIURA_SEQ] = { 1, 4, 10, 23, 57, 132, 301, 701, 1577, 3548 };
        incr = set_ciura_incr(array_size, ciura_sequence);
    }

    do {
        incr /= cut;

        for (index = incr; index < array_size; ++index) {
            current_value = array[index];
            aux_index = index - incr;

            while (aux_index >= 0 && current_value < array[aux_index]) {
                array[aux_index + incr] = array[aux_index];
                aux_index -= incr;
            }

            array[aux_index + incr] = current_value;
        }

        for (index = 0; index < array_size; ++index)
            printf("%d ", array[index]);

        printf("| INCR = %d \n\t", incr);
    } while (incr > 1);
}

int set_shell_incr (int array_size)
{
    int incr = 1;

    do {
        incr *= 2;
    } while (incr < array_size);

    return incr;
}

int set_knuth_incr (int array_size)
{
    int incr = 1;

    do {
        incr = (incr * 3) + 1;
    } while (incr < array_size);

    return incr;
}

int set_ciura_incr (int array_size, int* ciura_sequence)
{
    int incr = ciura_sequence[0];
    int index;

    for (index = 1; incr < array_size; ++index)
        incr = ciura_sequence[index];

    return incr;
}


