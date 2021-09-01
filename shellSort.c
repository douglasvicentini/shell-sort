#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shellSort.h"

void shell_sort(int *array, int array_size, char *sequence)
{
    int incr, cut, ciura_index; // melhorar 'cut' para outro naming
    int ciura_sequence[CIURA_SEQ] = { 1, 4, 10, 23, 57, 132, 301, 701, 1577, 3548 };

    if (strcmp(sequence, "shell") == 0) {
        incr = set_shell_incr(array_size);
        cut = 2;
        shellOrKnuthSorting(incr, cut, array, array_size);
        return;
    }

    if (strcmp(sequence, "knuth") == 0) {
        incr = set_knuth_incr(array_size);
        cut = 3;
        shellOrKnuthSorting(incr, cut, array, array_size);
        return;
    }

    if (strcmp(sequence, "ciura") == 0) {
        incr = set_ciura_incr(array_size, ciura_sequence);
        ciura_index = get_ciura_index(incr, ciura_sequence);
        ciuraSorting(incr, array, array_size, ciura_sequence, ciura_index);
        return;
    }

}
