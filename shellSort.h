#ifndef SHELLSORT_H_INCLUDED
#define SHELLSORT_H_INCLUDED

#define MAX_SIZE 16
#define CIURA_SEQ 10
#define BUFFER 256

void shell_sort(int* array, int array_size, char *sequence);
int set_shell_incr(int array_size);
int set_knuth_incr(int array_size);
int set_ciura_incr (int array_size, int* ciura_sequence);
int get_ciura_index (int incr, int* ciura_sequence);
void shellOrKnuthSorting(int incr, int cut, int* array, int array_size);
void ciuraSorting(int incr, int* array, int array_size, int* ciura_sequence, int ciura_index);

#endif


