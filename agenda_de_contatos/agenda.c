#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#define MAX 500

typedef struct {
    int code;
    char nome[100];
    char email[200];
    char celular[20];
} contato;

int main()
{   
    contato c[MAX];
    int a=1,opcao,j,k;
    int aux;

    FILE * memoria = fopen("contatos.bin", "rb");
    if (memoria == NULL) {
        printf ("\nErro ao abrir o arquivo. Deve existir um arquivo contatos.bin.");
        return 1;
    }
    size_t lidos = fread (c, sizeof(contato), MAX, memoria);
    int i=(int)lidos;
    fclose(memoria);

    while (a<10) {
     printf ("\n--------------------------------------------------");
     printf ("\n\nDigite 1 - adicionar novo contato.\nDigite 2 - excluir contato existente.");
     printf ("\nDigite 3 - alterar contato existente.\nDigite 4 - listar todos os contatos.\nDigite 5 - sair.\n");
     printf ("\n--------------------------------------------------");
     scanf ("%d", &opcao);
     switch (opcao) {
         case 1:
            printf ("\nCodigo de identificacao: ");
            scanf ("%d", &c[i].code);
            fflush(stdin);
            printf ("\nNome: ");
            fgets (c[i].nome, 100, stdin);
            fflush(stdin);
            int id = 0;
            while (c[i].nome[id] != '\0' && c[i].nome[id] != '\n') {
                id++;
            };
            c[i].nome[id] = '\0';
            printf ("\nE-mail: ");
            scanf ("%s", c[i].email);
            fflush(stdin);
            printf ("\nCelular: ");
            fgets (c[i].celular, 20, stdin);
            fflush(stdin);
            id=0;
            while (c[i].celular[id] != '\0' && c[i].celular[id] != '\n') {
                id++;
            };
            c[i].celular[id] = '\0';
            printf ("\n\nContato adicionado!");
            i++;
            memoria = fopen("contatos.bin", "w+b");
            if (memoria == NULL) {
                printf ("\nErro ao abrir o arquivo.");
                return 0;
            }
            size_t salvos = fwrite (c, sizeof(contato), i, memoria);
            if (salvos != (size_t)i) {
                printf ("\nErro ao salvar o arquivo.");
                return 1;
            }
            fclose(memoria);
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
            memoria = fopen("contatos.bin", "w+b");
            if (memoria == NULL) {
                printf ("\nErro ao abrir o arquivo.");
                return 0;
            }
            salvos = fwrite (c, sizeof(contato), i, memoria);
            if (salvos != (size_t)i) {
                printf ("\nErro ao salvar o arquivo.");
                return 1;
            }
            fclose(memoria);
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
                    fgets (c[i].nome, 100, stdin);
                    fflush(stdin);
                    id = 0;
                    while (c[i].nome[id] != '\0' && c[i].nome[id] != '\n') {
                        id++;
                    };
                    c[i].nome[id] = '\0';
                    printf ("\nE-mail: ");
                    scanf ("%s", c[j].email);
                    fflush(stdin);
                    printf ("\nCelular: ");
                    fgets (c[i].celular, 20, stdin);
                    fflush (stdin);
                    id=0;
                    while (c[i].celular[id] != '\0' && c[i].celular[id] != '\n') {
                        id++;
                    };
                    c[i].celular[id] = '\0';
                }
            }
            printf ("\nContato de codigo %d alterado.", aux);
            memoria = fopen("contatos.bin", "w+b");
            if (memoria == NULL) {
                printf ("\nErro ao abrir o arquivo.");
                return 0;
            }
            salvos = fwrite (c, sizeof(contato), i, memoria);
            if (salvos != (size_t)i) {
                printf ("\nErro ao salvar o arquivo.");
                return 1;
            }
            fclose(memoria);
            break;
         case 4:
            printf ("\nLISTA DE TODOS OS CONTATOS:");
            for (j=0; j<i; j++) {
                printf ("\n--------------------------------------------------");
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
