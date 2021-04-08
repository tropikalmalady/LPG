#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#define MAX 500

int main()
{   
    struct contato {
        int code;
        char nome[100];
        char email[200];
        char celular[20];
    };
    struct contato c[MAX];
    int a=1,opcao,i=0,j,k;
    int aux;
    while (a<10) {
     printf ("\n\nDigite 1 - adicionar novo contato.\nDigite 2 - excluir contato existente.");
     printf ("\nDigite 3 - alterar contato existente.\nDigite 4 - listar todos os contatos.\nDigite 5 - sair.\n");
     scanf ("%d", &opcao);
     switch (opcao) {
         case 1:
            printf ("\nCodigo de identificacao: ");
            scanf ("%d", &c[i].code);
            fflush(stdin);
            printf ("\nNome: ");
            scanf ("%s", c[i].nome);
            fflush(stdin);
            printf ("\nE-mail: ");
            scanf ("%s", c[i].email);
            fflush(stdin);
            printf ("\nCelular: ");
            scanf ("%s", &c[i].celular);
            fflush(stdin);
            printf ("\n\nContato adicionado!");
            i++;
            break;
         case 2:
            printf ("\nDigite o codigo de identificacao do contato que deseja excluir: ");
            scanf ("%d", &aux);
            for (j=0; j<i; j++) {
                if (aux==c[j].code) {
                    printf ("\nContato com codigo %d excluido.", aux);
                    for (k=j; k<i; k++) {
                       c[k].code = c[k+1].code;
                       strcpy (c[k].nome, c[k+1].nome);
                       strcpy (c[k].email, c[k+1].email);
                       strcpy (c[k].celular, c[k+1].celular);
                    }
                    i--;    
                }
            }
            break;
         case 3:
            printf ("\nDigite o codgio de identificacao do contato que deseja alterar: ");
            scanf ("%d", &aux); 
            for (j=0; j<i; j++) {
                if (aux==c[j].code) {
                    printf ("\nDigite as novas informacoes de contato: ");
                    printf ("\nCodigo de identificacao: ");
                    scanf ("%d", &c[j].code);
                    fflush(stdin);
                    printf ("\nNome: ");
                    scanf ("%s", c[j].nome);
                    fflush(stdin);
                    printf ("\nE-mail: ");
                    scanf ("%s", c[j].email);
                    fflush(stdin);
                    printf ("\nCelular: ");
                    scanf ("%s", &c[j].celular);
                    fflush (stdin);
                }
            }
            break;
         case 4:
            for (j=0; j<i; j++) {
                printf ("\n\nCodigo de identificacao: %d", c[j].code);
                printf ("\nNome: %s", c[j].nome);
                printf ("\nE-mail: %s", c[j].email);
                printf ("\nCelular: %s", c[j].celular);
            }
            break;
         case 5:
            printf ("Finalizando programa...");
            system ("pause");
            return 0;
         default:
            printf ("Opcao invalida. Digite novamente.");
            break;
        }
    } 
system ("pause");
}
