#include <stdio.h>

int scanArrayLength(FILE *in) {
    int length;
    fscanf(in, "%d", &length);
    return length;
}

void printArray(FILE *out, int array[], int size) {
    int i = 0;
    
    for ( int last = size - 1; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[i]);
}