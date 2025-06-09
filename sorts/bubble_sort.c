#include <stdio.h>

void bubbleSort(int array[], int size) {
    while (size > 1) {
        int last = 1;

        for (int i = 1, j = 0; i < size; i++, j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                last = i;
            }
        }
        
        size = last;
    }
}
