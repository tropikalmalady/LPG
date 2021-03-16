<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int a[15], maior=0, i, aux=0, soma=0;
    float media;

    for (i=0; i<15; i++) {
        printf ("\nDigite os valores do vetor: ");
        scanf ("%d", &a[i]);
    }
    for (i=0; i<15; i++) {
        if (a[i]>maior) {
            maior = a[i];
            aux = i;
        }
    }
    for (i=0; i<15; i++) {
        soma = soma + a[i];
    }
    media = soma/15.0;
    printf ("\nO maior valor do vetor eh: %d e sua posicao eh: %d.", maior, aux);
    printf ("\nA soma dos valores do vetor eh: %d e a media eh: %.2f.", soma, media);
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int a[15], maior=0, i, aux=0, soma=0;
    float media;

    for (i=0; i<15; i++) {
        printf ("\nDigite os valores do vetor: ");
        scanf ("%d", &a[i]);
    }
    for (i=0; i<15; i++) {
        if (a[i]>maior) {
            maior = a[i];
            aux = i;
        }
    }
    for (i=0; i<15; i++) {
        soma = soma + a[i];
    }
    media = soma/15.0;
    printf ("\nO maior valor do vetor eh: %d e sua posicao eh: %d.", maior, aux);
    printf ("\nA soma dos valores do vetor eh: %d e a media eh: %.2f.", soma, media);
>>>>>>> 5ef496be4a18634d957fdef46ad2c94b83aae5a7
}