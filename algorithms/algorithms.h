#ifndef ALGORITHMS_H
#define ALGORITHMS_H

typedef enum {
    SORT_BUBBLE,
    SORT_INSERT,
    SORT_MERGE,
    SORT_QUICK,
    SORT_SELECT,
    SORT_UNKNOWN
} SortAlgorithm;

SortAlgorithm getAlgorithmFromString(const char *str);

#endif
