#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int lo, int mid, int hi) {
    int sizeTemp = hi - lo;
    int tempArray[sizeTemp];
    int index1 = lo;
    int index2 = mid;
    int indexTemp = 0;

    while (index1 < mid && index2 < hi) {
        if (array[index2] < array[index1]) {
            tempArray[indexTemp++] = array[index2++];
        } else {
            tempArray[indexTemp++] = array[index1++];
        }
    }

    while (index1 < mid) {
        tempArray[indexTemp++] = array[index1++];
    }

    while (index2 < hi) {
        tempArray[indexTemp++] = array[index2++];
    }

    for (int i = 0; i < sizeTemp; i++) {
        array[lo + i] = tempArray[i];
    }
}

int iterationQuantity(int n) {
    int res = 0;
    for (int i = 1; i < n; i *= 2) {
        res++;
    }
    return res;
}

void mergeSort(int array[], int len) {
    int quantity = iterationQuantity(len);
    int step = 1;

    for (int i = 0; i < quantity; i++) {
        int lo = 0;

        while (lo < len) {
            int mid = lo + step;
            int hi = mid + step;

            if (mid > len) mid = len;
            if (hi > len) hi = len;

            merge(array, lo, mid, hi);

            lo = hi;
        }

        step *= 2;
    }
}
