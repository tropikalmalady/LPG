#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int a[10], b[10], c[10], i;

    for (i=0; i<10; i++) {
        printf ("\nDigite os valores do vetor A: ");
        scanf ("%d", &a[i]);
    }
    for (i=0; i<10; i++) {
        printf ("\nDigite os valores do vetor B: ");
        scanf ("%d", &b[i]);
    }
    for (i=0; i<10; i++) {
        c[i] = a[i] * b[i];
    }
    printf ("\nO vetor resultante eh: ");
    for (i=0; i<10; i++) {
        printf (" %d ", c[i]);
    }
}