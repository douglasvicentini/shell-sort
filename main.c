#include <stdio.h>
#include <stdlib.h>
#include "shellSort.h"

int main ()
{
    int index;

    int array[MAX_SIZE] = { 8, 2, 21, 14, 1, 5, 11, 9, 10, 3, 8, 18, 16, 6, 22, 7};

    printf("\n\n\n\t -> Original Array: ");

    for (index = 0; index < MAX_SIZE; ++index) {
        printf("%d ", array[index]);
    }

    shell_sort(array, MAX_SIZE);

    printf("\n\n\t -> Sorted Array: ");

    for (index = 0; index < MAX_SIZE; ++index) {
        printf("%d ", array[index]);
    }

    printf("\n\n\n");
}
