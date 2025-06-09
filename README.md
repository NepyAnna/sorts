# Sort's Algorithms App

This project implements a set of sorting algorithms in the C programming language. The program reads an array of integers from `task.in`, sorts it using the selected algorithm, and writes the result to `task.out`.

## Implemented Algorithms
Bubble Sort

Insertion Sort

Merge Sort

Quick Sort

Selection Sort

## Project Structure
```text
sorts/
├── algorithms/
│   ├── algorithms.c         # Logic to select sorting algorithm based on input
│   └── algorithms.h         # Algorithm enum and function declarations
│
├── sorts/
│   ├── bubble_sort.c        # Bubble sort implementation
│   ├── bubble_sort.h
│   ├── insert_sort.c        # Insertion sort implementation
│   ├── insert_sort.h
│   ├── merge_sort.c         # Merge sort implementation
│   ├── merge_sort.h
│   ├── quick_sort.c         # Quick sort implementation
│   ├── quick_sort.h
│   ├── select_sort.c        # Selection sort implementation
│   └── select_sort.h
│
├── utils/
│   ├── io.c                 # Input/output helpers: reading arrays, printing
│   └── io.h
│
├── task.in                  # Input file with array data
├── main.c                   # Entry point, reads args and input, triggers sorting
├── makefile                 # Build instructions
└── README.md  
```
## Build Instructions

Requirements

- C compiler (tested with `clang`, works with `gcc`)
- `make` utility

Compile
```bash
make
```

Run
```bash
./sorter [algorithm]
```

Where [algorithm] is one of:

- bubble

- insert

- merge

- quick

- select

Example:
```bash
./sorter quick
```
## Input Format (task.in)
The first line contains the number of elements.
The second line contains the array of integers.

```bash
5
7 2 4 1 3
```
## Output Format (task.out)
A single line with the sorted array:

```bash
4 2 1 3 5
```

## Clean
```bash
make clean
```