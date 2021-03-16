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
        int celular;
    };
    struct contato c[MAX];
    int a=1,opcao,i=0,j,k,w,x;
    int aux;
    while (a<10) {
     printf ("\n\nDigite 1 - adcionar novo contato.\nDigite 2 - excluir contato existente.");
     printf ("\nDigite 3 - alterar contato existente.\nDigite 4 - listar todos os contatos.\nDigite 5 - sair.\n");
     scanf ("%d", &opcao);
     switch (opcao) {
         case 1:
            printf ("\nCodigo de indentificacao: ");
            scanf ("%d", &c[i].code);
            fflush(stdin);
            printf ("\nNome: ");
            scanf ("%s", c[i].nome);
            fflush(stdin);
            printf ("\nE-mail: ");
            scanf ("%s", c[i].email);
            fflush(stdin);
            printf ("\nCelular: ");
            scanf ("%d", &c[i].celular);
            printf ("\n\nContato adicionado!");
            i++;
            break;
         case 2:
            printf ("\nDigite o codigo de identificacao do contato que deseja excluir: ");
            scanf ("%d", &aux);
            for (j=0; j<i; j++) {
                if (aux==c[j].code) {
                    printf ("\nContato com codigo %d excluido.", aux);
                    for (k=j; k<i-1; k++) {
                       c[k].code = c[k+1].code;
                       strcpy (c[k].nome, c[k+1].nome);
                       strcpy (c[k].email, c[k+1].email);
                       c[k].celular = c[k+1].celular;
                       i--;
                    }    
                }
            }
            break;
         case 3:
            printf ("\nDigite o codgio de identificacao do contato que deseja alterar: ");
            scanf ("%d", &aux); 
            for (w=0; w<i; w++) {
                if (aux==c[w].code) {
                    printf ("\nDigite as novas informacoes de contato: ");
                    printf ("\nCodigo de indentificacao: ");
                    scanf ("%d", &c[w].code);
                    fflush(stdin);
                    printf ("\nNome: ");
                    scanf ("%s", c[w].nome);
                    fflush(stdin);
                    printf ("\nE-mail: ");
                    scanf ("%s", c[w].email);
                    fflush(stdin);
                    printf ("\nCelular: ");
                    scanf ("%d", &c[w].celular);
                }
            }
            break;
         case 4:
            for (x=0; x<i; x++) {
                printf ("\n\nCodigo de identificacao: %d", c[x].code);
                printf ("\nNome: %s", c[x].nome);
                printf ("\nE-mail: %s", c[x].email);
                printf ("\nCelular: %d", c[x].celular);
            }
            break;
         case 5:
            printf ("Finalizando programa...");
            system ("pause");
            return 0;
         default:
            printf ("Opcao invalida. Digite novamenete.");
            break;
        }
    } 
system ("pause");
}
