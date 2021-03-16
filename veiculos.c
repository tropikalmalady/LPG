#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#define MAX 1000

int main(void)
{
    struct veiculo {
        char placa[100];
        enum categoria {carro=1, moto, onibus, caminhao} catg;
        char modelo [100];
        int ano;
    };
    int opcao,i=1,j=0,z;
    struct veiculo v[MAX];
    while (i<10) {
        printf ("\nDigite 1 - adicionar veiculo.\nDigite 2 - listar todos os veiculos.\nDigite 3 - finalizar programa.\n");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 1:
                fflush (stdin);
                printf ("\nDigite a placa do veiculo: ");
                scanf ("%s", v[j].placa);
                fflush (stdin);
                printf ("\nDigite a categoria\n(1 - carro\n2 - moto\n3 - onibus\n4 - caminhao):\n");
                scanf ("%d", &v[j].catg);
                fflush (stdin);
                printf ("\nDigite o modelo do veiculo: ");
                scanf ("%s", v[j].modelo);
                fflush (stdin);
                printf ("\nDigite o ano do veiculo: ");
                scanf ("%d", &v[j].ano);
                j = j+1;
                break;
            case 2:
                for (z=0; z<j; z++) {
                    printf ("\n");
                    printf ("\nPlaca: %s", v[z].placa);
                    switch (v[z].catg) {
                            case carro:
                                printf ("\nCategoria: carro");
                                break;
                            case moto:
                                printf ("\nCategoria: moto");
                                break;
                            case onibus:
                                printf ("\nCategoria: onibus");
                                break;
                            case caminhao:
                                printf ("\nCategoria: caminhao");
                                break;
                            default:
                                printf ("\nCategoria: invalido");
                                break;

                    }
                    printf ("\nModelo: %s", v[z].modelo);
                    printf ("\nAno: %d", v[z].ano);
                    printf ("\n");
                }
                break;
            case 3:
                printf ("\nFinalizando programa...");
                return 0; 
            default:
                printf ("\nOpcao invalida. Digite novamente.");
                break;
        }   
    }
}
