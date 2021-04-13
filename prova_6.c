#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <strings.h>
#include <time.h>
#include <ctype.h>
#define MAX 2000

int contador (FILE*arquivo, const char *palavra);

int main (){
    int count;
    char palavra[50];
    printf("\nEscreva a palavra selecionada para pesquisar: ");
    scanf("%s",palavra);
    FILE* arquivo=fopen ("texto.txt","r"); 
    //O arquivo texto.txt deve existir na mesma pasta no executavel.
    if (arquivo==NULL) {
        printf ("\nErro ao abrir o arqiuvo.\n");
        system ("pause");
        return 0;
    }
    count = contador (arquivo, palavra);
    printf ("\nA palavra %s foi encontrada %d vezes.\n", palavra,count);
    fclose(arquivo);
    system ("pause");
    return 0;
}
int contador (FILE*arquivo, const char *palavra){
    char *onde;
    char texto[MAX];
    int i, count=0;
    while (fgets(texto, MAX, arquivo)!=NULL) {
        i=0;
        while ((onde = strstr (texto + i, palavra))!=NULL) {
            if ((isalpha(onde[strlen(palavra)])) || (isdigit(onde[strlen(palavra)]))) {
                i = (onde - texto) + 1;
            } else {
                i = (onde - texto) + strlen(palavra);
                count++;
            }
        }
    }
    return count;
}