#include <string.h>
#include "algorithms.h"

SortAlgorithm getAlgorithmFromString(const char *str) {
    if (strcmp(str, "bubble") == 0) return SORT_BUBBLE;
    if (strcmp(str, "insert") == 0) return SORT_INSERT;
    if (strcmp(str, "merge")  == 0) return SORT_MERGE;
    if (strcmp(str, "quick")  == 0) return SORT_QUICK;
    if (strcmp(str, "select") == 0) return SORT_SELECT;
    return SORT_UNKNOWN;
}
