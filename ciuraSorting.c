#include <stdio.h>
#include <stdlib.h>
#include "shellSort.h"

void ciuraSorting(int incr, int* array, int array_size, int* ciura_sequence, int ciura_index)
{
    int index, aux_index, current_value;

    do {
        incr = ciura_sequence[ciura_index];

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

        printf("INCR = %d \n\t", incr);
        --ciura_index;
    } while (incr > 1);
}
