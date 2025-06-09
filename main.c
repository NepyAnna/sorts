#include <stdio.h>
#include <string.h>
#include "sorts/bubble_sort.h"
#include "sorts/insert_sort.h"
#include "sorts/merge_sort.h"
#include "sorts/quick_sort.h"
#include "sorts/select_sort.h"
#include "utils/io.h"
#include "algorithms/algorithms.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s [bubble|insert|merge|quick|select]\n", argv[0]);
        return 1;
    }

    SortAlgorithm algo = getAlgorithmFromString(argv[1]);

    if (algo == SORT_UNKNOWN) {
        printf("Unknown sort: %s\n", argv[1]);
        return 1;
    }

    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    int len = scanArrayLength(in);
    int array[len];
    for (int i = 0; i < len; i++) fscanf(in, "%d", &array[i]);
    fclose(in);

    switch (algo) {
        case SORT_BUBBLE:  bubbleSort(array, len); break;
        case SORT_INSERT:  insertSort(array, len); break;
        case SORT_MERGE:   mergeSort(array, len); break;
        case SORT_QUICK:   quickSort(array, 0, len - 1); break;
        case SORT_SELECT:  selectSort(array, len); break;
        default: break;
    }

    printArray(out, array, len);
    fclose(out);
    return 0;
}