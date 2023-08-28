#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size) {
    int sum_diag1 = 0;
    int sum_diag2 = 0;

    for (int i = 0; i < size; i++) {
        sum_diag1 += a[i * size + i]; 
        sum_diag2 += a[i * size + (size - 1 - i)];  
    }

    printf("Sum of main diagonal: %d\n", sum_diag1);
    printf("Sum of other diagonal: %d\n", sum_diag2);
}
