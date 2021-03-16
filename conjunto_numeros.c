#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>


int main()
{
    int n,k,i,z,w,aux;
    printf ("Digite o tamanho do conjunto: \n");
    scanf ("%d", &n);
    int a[n];
    printf ("Digite um numero K: \n");
    scanf ("%d", &k);
    for (i=0; i<n; i++) {
        printf ("Digite os numeros do conjunto em ordem: \n");
        scanf ("%d", &a[i]);
    }
    for (z=0; z<n-1; z++) {
        for (w=z+1; w<n; w++) {
            aux = a[w] + a[z];
        if (aux==k) {
            printf ("TRUE");
            return 0;
        }  
        }

    } 
    printf ("FALSE");
}
