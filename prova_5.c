#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <strings.h>
#include <time.h>

int main()
{
    int num;
    bool primo (int x, int i);

    printf ("Digite um numero inteiro e positivo: ");
    scanf ("%d", &num);
    if (num<0) {
        printf ("\nNumero negativo.\n");
        system ("pause");
        return 0;
    }
    if (primo(num, 1)) {
        printf ("\nO numero digitado eh primo!\n");
    } else {
        printf ("\nO numero digitado NAO eh primo!\n");
    }
    system ("pause");
    return 0;
}

bool primo (int x, int i) {
    static int divs;
    if (i>x) {
        return x;
    }
    if (x%i==0) {
        divs++;
    }
    primo(x, i+1);
    if (divs<=2) {
        return true;
    }
    return false;
}
    