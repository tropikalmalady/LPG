#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#define MAX 100000

int main()
{
    int n,i,j,w,z;
    int aux=0;
    int par[MAX];
    printf ("Digite o numero total de luvas: \n");
    scanf ("%d", &n);
    int luvas[n];
    for (i=0; i<n; i++) {
        printf ("Digite o tamanho de cada luva: \n");
        scanf ("%d", &luvas[i]);
    }
    for (j=0; j<n-1; j++) {
        for (w=j+1; w<n; w++) { 
            if (luvas[j]==luvas[w]) {
                par[aux]=luvas[w];
                aux = aux + 1;
                luvas[j] = -1;
                luvas[w] = -1;
            }
        }
    } 
    if (aux==0) {
        printf ("Nao existem pares com o mesmo tamanho. \n");
    }
    else {
        printf ("Existem %d pares de luvas com o mesmo tamanho. \n", aux);
        printf ("Os tamanhos que formam pares sao: ");
        for (z=0; z<aux; z++){
            printf ("%d, ", par[z]);
        }
    }
}
