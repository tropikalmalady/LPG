#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>


int main(void)
{
    struct produto {
    char nome[100];
    float preco,valor_total;
    int quantidade;
};
    struct produto p1;
    fflush (stdin);
    printf ("Digite o nome do produto: ");
    scanf ("%s", p1.nome);
    fflush (stdin);
    printf ("\nQual seu preco unitario: ");
    scanf ("%f", &p1.preco);
    printf ("\nQual a quantidade comprada: ");
    scanf ("%d", &p1.quantidade);
    if (p1.quantidade<6) {
        p1.valor_total = p1.preco*p1.quantidade;
    }
    if (p1.quantidade<16 && p1.quantidade>5) {
        p1.valor_total = (p1.preco*p1.quantidade);
        p1.valor_total = p1.valor_total - (p1.valor_total*0.1);
    }
    if (p1.quantidade>15) {
       p1.valor_total = (p1.preco*p1.quantidade);
        p1.valor_total = p1.valor_total - (p1.valor_total*0.2); 
    }
    printf ("\nNome do produto: %s", p1.nome);
    printf ("\nPreco unitario: %.2f", p1.preco);
    printf ("\nValor a ser pago: %.2f", p1.valor_total);
}
