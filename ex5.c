#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int i;
    char nome[20][50];
    float soma=0.0, media, sal[20];

    for (i=0; i<20; i++) {
        fflush (stdin);
        printf ("\nDigite o nome do funcionario: ");
        scanf ("%s", nome[i]);
        fflush (stdin);
        printf ("\nDigite o salario respectivo: ");
        scanf ("%f", &sal[i]);
    }
    for (i=0; i<20; i++) {
        soma = soma + sal[i];
    }
    media = soma/20.0;
    for (i=0; i<20; i++) {
        if (sal[i]>media) {
            sal[i] = sal[i] + (sal[i]*0.05);
        } else {
            sal[i] = sal[i] + (sal[i]*0.1);
        }
    }
    printf ("\nOs nomes e seus respectivos salarios finais sao:\n");
    for (i=0; i<20; i++) {
        printf ("%s - %.2f.\n", nome[i], sal[i]);
    }
}