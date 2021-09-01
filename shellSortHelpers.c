#include <stdio.h>
#include <stdlib.h>

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

int get_ciura_index (int incr, int* ciura_sequence)
{
    int index, ciura_index = -1;

    for (index = 0; ciura_index == -1; ++index) {
        if (ciura_sequence[index] == incr)
            ciura_index = index;
    }

    return ciura_index;
}

