#include <stdio.h>

int partition( int array[], int start, int end ) {
    int average = (start + end) / 2;
    int pivot = array[average];
    int tail;

    array[average] = array[end];
    array[end] = pivot;

    for ( tail = 0; array[tail] < array[end]; tail++ );
    for ( int i = tail + 1; i < end; i++ ) {
        if ( array[i] <= array[end] ) {
            int tmp = array[i];

            array[i] = array[tail];
            array[tail] = tmp;
            tail += 1;
        }
    }

    pivot = array[tail];
    array[tail] = array[end];
    array[end] = pivot;

    return tail;
}

void quickSort(int array[], int lo, int hi) {
    int pivot;

    if ( hi - lo < 1 ) {
        return;
    }

    pivot = partition(array, lo, hi);

    quickSort(array, lo, pivot-1);
    quickSort(array, pivot+1, hi);
}