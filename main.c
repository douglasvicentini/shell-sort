#include <stdio.h>
#include <stdlib.h>
#include "shellSort.h"

void printArray (int *array, int array_size);

int main ()
{
    int index;
    int original_array[MAX_SIZE] = { 16, 14, 12, 1, 8, 4, 9, 6, 15, 13, 11, 2, 7, 3, 10, 5 };
    int shell_array[MAX_SIZE];
    int knuth_array[MAX_SIZE];
    int ciura_array[MAX_SIZE];

    for (index = 0; index < MAX_SIZE; ++index) {
        shell_array[index] = original_array[index];
        knuth_array[index] = original_array[index];
        ciura_array[index] = original_array[index];
    }

    printArray(shell_array, MAX_SIZE);
    printf("SEQ=SHELL\n\t");
    shell_sort(shell_array, MAX_SIZE, "shell");

    printArray(knuth_array, MAX_SIZE);
    printf("SEQ=KNUTH\n\t");
    shell_sort(knuth_array, MAX_SIZE, "knuth");

    printArray(ciura_array, MAX_SIZE);
    printf("SEQ=CIURA\n\t");
    shell_sort(ciura_array, MAX_SIZE, "knuth");

    printf("\n\n\n");
}

void printArray (int *array, int array_size)
{
    int index;
    printf("\n\t");
    for (index = 0; index < array_size; ++index) {
        printf("%d ", array[index]);
    }
}
