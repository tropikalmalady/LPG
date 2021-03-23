#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int a[100], soma=0, acimamedia[100], somamedia=0, aux[100], i, j=0;
    float media;

    for (i=0; i<100; i++) {
        printf ("\nDigite os valores do vetor: ");
        scanf ("%d", &a[i]);
    }
    printf ("\nO vetor eh:");
    for (i=0; i<100; i++) {
        printf (" %d", a[i]);
    }
    for (i=0; i<100; i++) {
        soma = soma + a[i];
    }
    media = soma/100.0;
    for (i=0; i<100; i++) {
        if (a[i]>media) {
           acimamedia[j] = a[i];
           aux[j] = i;
           j++; 
        }
    }
    for (i=0; i<j; i++) {
        somamedia = somamedia + acimamedia[i];
    }
    printf ("\nA media eh: %.2f.", media);
    printf ("\nOs numeros acima da media e suas respectivas posicoes sao:\n");
    for (i=0; i<j; i++) {
        printf ("%d - (%d). ", acimamedia[i], aux[i]);
    }
    printf ("\nA soma dos numeros acima da media eh: %d.", somamedia);
    printf ("\nA porcentagem dos numeros que estao acima da media eh: %d %%.", j);
}