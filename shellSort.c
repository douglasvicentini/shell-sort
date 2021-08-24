#include <stdio.h>
#include <stdlib.h>

void shell_sort(int *a, int array_size)
{
    int index, aux_index, value; // int i , j , value;

    int incr = 1; // int gap = 1

    do {
        incr = 3*incr+1;
    } while (incr < array_size);

    do {
        incr /= 3;

        for (index = incr; index < array_size; ++index) {
            value = a[index];
            aux_index = index - incr;

            while (aux_index >= 0 && value < a[aux_index]) {
                a[aux_index + incr] = a[aux_index];
                aux_index -= incr;
            }

            a[aux_index + incr] = value;
        }
    } while (incr > 1);
}

