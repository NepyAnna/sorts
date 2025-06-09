#include <stdio.h>

void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = array[i];
        int minIndex = i;
        
        for ( int j = i; j < size; j++ ) {
            if ( array[j] < min ) {
                min = array[j];
                minIndex = j;
            }
        }
        array[minIndex] = array[i];
        array[i] = min;
    }
}