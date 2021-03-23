#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    char nome[5][15];
    int idade[5];
    float idadem;
    int i,soma=0,aux,troca=1;
    char auxnome[15];
    
    for (i=0; i<5; i++){
        fflush (stdin);
        printf ("\nDigite o nome da pessoa: ");
        scanf ("%s", nome[i]);
        fflush (stdin);
        printf ("\nDigite a idade dessa pessoa: ");
        scanf ("%d", &idade[i]);
    }
    for (i=0; i<5; i++) {
        soma = soma + idade[i];
    }
    idadem = soma/5.0;
    printf ("\nA idade media eh: %.2f", idadem);
    while (troca<=5) {
        for (i=4; i>0; i--) {
            if (idade[i]>idade[i-1]) {
                aux=idade[i];
                idade[i]=idade[i-1];
                idade[i-1]=aux;
                strcpy (auxnome,nome[i]);
                strcpy (nome[i],nome[i-1]);
                strcpy (nome[i-1],auxnome);
            }
        }   
        troca++; 
    }
    for (i=0; i<5; i++) {
        printf ("\nNome: %s, Idade: %d", nome[i], idade[i]);
    }
}