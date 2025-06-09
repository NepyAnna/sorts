#include <stdio.h>

void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int element = array[i];
        int j = i - 1;
        for ( ; j >= 0 && element < array[j]; j-- ) {
            array[j+1] = array[j];
        }
        array[j+1] = element;
    }
}