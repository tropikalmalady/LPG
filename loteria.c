#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <strings.h>
#include <time.h>

int main (void)
{
    void menu (void);
    menu();
}
void menu (void) {
    int i=1, opcao;
    void megasena (void);
    void lotofacil (void);
    void lotomania (void);
    while (i<10) {
        printf ("\nEscolha a opcao desejada: ");
        printf ("\n1 - Mega-Sena.");
        printf ("\n2 - Lotofacil.");
        printf ("\n3 - Lotomania.");
        printf ("\n4 - Finalizar apostas.\n");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 1:
                megasena();
                break;
            case 2:
                lotofacil();
                break;
            case 3:
                lotomania();
                break;
            case 4:
                printf ("\nApostas encerradas.");
                exit (0);
                break;
            default:
                printf ("\nOpcao invalida. Tente novamente.");
                break;
        }
    }
}
void megasena (void) {
    int i,n,j,opcao,v;
    int sorteado[6];
    int tam=6;
    int resultado (int x[], int r[], int num, int size);
    bool validar (int numeros[], int lim, int valor);
    srand ((unsigned)time(NULL));
    for (i=0; i<6; i++) {
        v= 1 + rand() % 60;
        while (validar(sorteado,i,v)) {
            v = 1 + rand() % 60;
        }
        sorteado[i]=v;
    }
    printf ("\nDigite quantos numeros voce deseja marcar (entre 6 e 15): ");
    scanf ("%d", &n);
    int a[n];
    if (n<6 || n>15) {
        printf ("\nOpcao invalida.");
    } else {
        printf ("\nEscolha uma opcao:");
        printf ("\n1 - Escolher os numeros.");
        printf ("\n2 - Gerar aleatoriamente.\n");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 1:
                printf ("\nDigite os numeros escolhidos: ");
                for (i=0; i<n; i++) {
                    scanf ("%d", &a[i]);
                    if (a[i]<1 || a[i]>60) {
                        srand ((unsigned)time(NULL));
                        while (validar(a,i,v)) {
                            v = 1 + rand() % 60;
                        }
                        a[i]=v;
                    } 
                }    
                break;
            case 2:
                srand ((unsigned)time(NULL));
                for (i=0; i<n; i++) {
                v= 1 + rand() % 25;
                while (validar(a,i,v)) {
                v = 1 + rand() % 25;
                }
                a[i]=v;
                }
                break;
            default:
                printf ("\nOpcao invalida.");
                break;
        }
        printf ("\nOs numeros apostados foram:");
        for (i=0; i<n; i++){
            printf (" %d", a[i]);
        }
        printf ("\nOs numeros sorteados foram:");
        for (i=0; i<6; i++) {
            printf (" %d", sorteado[i]);
        }
        int counter = resultado (a, sorteado, n, tam);
        printf ("\nVoce acertou %d numeros!", counter);
        if (counter<4) {
            printf ("\nVoce nao ganhou nenhum premio.");
        } else {
            printf ("\nParabens! Voce ganhou um premio.");
        }
    }
}
void lotofacil (void) {
    int i,n,j,opcao,v;
    int sorteado[15];
    int tam=15;
    int resultado (int x[], int r[], int num, int size);
    bool validar (int numeros[], int lim, int valor);
    srand ((unsigned)time(NULL));
    for (i=0; i<15; i++) {
        v= 1 + rand() % 25;
        while (validar(sorteado,i,v)) {
            v = 1 + rand() % 25;
        }
        sorteado[i]=v;
    }
    printf ("\nQuantos numeros voce deseja marcar (entre 15 e 20): ");
    scanf ("%d", &n);
    int a[n];
    if (n<15 || n>20) {
        printf ("\nOpcao invalida.");
    } else {
        printf ("\nEscolha uma opcao:");
        printf ("\n1 - Escolher os numeros.");
        printf ("\n2 - Gerar aleatoriamente.\n");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 1:
                printf ("\nDigite os numeros escolhidos: ");
                for (i=0; i<n; i++) {
                    scanf ("%d", &a[i]);
                    if (a[i]<1 || a[i]>25) {
                        srand ((unsigned)time(NULL));
                        while (validar(a,i,v)) {
                            v = 1 + rand() % 25;
                        }
                        a[i]=v;
                    } 
                } 
                break;
            case 2:
                srand ((unsigned)time(NULL));
                for (i=0; i<n; i++) {
                v= 1 + rand() % 25;
                while (validar(a,i,v)) {
                v = 1 + rand() % 25;
                }
                a[i]=v;
                }
                break;
            default:
                printf ("\nOpcao invalida.");
                break;
        }
        printf ("\nOs numeros apostados foram:");
        for (i=0; i<n; i++){
            printf (" %d", a[i]);
        }
        printf ("\nOs numeros sorteados foram:");
        for (i=0; i<15; i++) {
            printf (" %d", sorteado[i]);
        }
        int counter = resultado (a, sorteado, n, tam);
        printf ("\nVoce acertou %d numeros!", counter);
        if (counter<11 || counter>20) {
            printf ("\nVoce nao recebeu nenhum premio.");
        } else {
            printf ("\nParabens! Voce ganhou um premio.");
        }
    }
}
void lotomania (void) {
    int i,n,j,opcao,v;
    int sorteado[20];
    int tam=20;
    int a[50];
    int resultado (int x[], int r[], int num, int size);
    bool validar (int numeros[], int lim, int valor);
    srand ((unsigned)time(NULL));
    for (i=0; i<20; i++) {
        v= rand() % 99;
        while (validar(sorteado,i,v)) {
            v = rand() % 99;
        }
        sorteado[i]=v;
    }
    printf ("\nEscolha uma opcao:");
    printf ("\n1 - Escolher todos numeros.");
    printf ("\n2 - Gerar aleatoriamente.");
    printf ("\n3 - Escolher apenas alguns numero.\n");
    scanf ("%d", &opcao);
    switch (opcao) {
        case 1:
            srand ((unsigned)time(NULL));
            printf ("\nDigite os numeros escolhidos: ");
            for (i=0; i<50; i++) {
                scanf ("%d", &a[i]);
                if (a[i]<0 || a[i]>99) {
                        srand ((unsigned)time(NULL));
                        while (validar(a,i,v)) {
                            v = rand() % 99;
                        }
                        a[i]=v;
                    } 
                }  
            break;
        case 2:
            srand ((unsigned)time(NULL));
            for (i=0; i<50; i++) {
                v= rand() % 99;
            while (validar(a,i,v)) {
                v = rand() % 99;
            }
            a[i]=v;
            }
            break;
        case 3:
            printf ("\nDigite quantos numeros voce deseja marcar: ");
            scanf ("%d", &n);
            if (n<0 && n>50) {
                printf ("\nOpcao invalida.");
            } else {
                printf ("\nDigite os numeros de sua escolha: ");
                for (i=0; i<n; i++) {
                    scanf ("%d", &a[i]);
                    if (a[i]<0 || a[i]>99) {
                        srand ((unsigned)time(NULL));
                        while (validar(a,i,v)) {
                            v = rand() % 99;
                        }
                        a[i]=v;
                    } 
                }
                srand ((unsigned)time(NULL));
                for (i=n; i<50; i++) {
                    v= rand() % 99;
                while (validar(a,i,v)) {
                    v = rand() % 99;
                }
                a[i]=v;
                }
            }  
            break;
        default:
            printf ("\nOpcao invalida.");
            break;
    }
    printf ("\nOs numeros apostados foram:");
    for (i=0; i<50; i++){
        printf (" %d", a[i]);
    }
    printf ("\nOs numeros sorteados foram:");
    for (i=0; i<20; i++) {
        printf (" %d", sorteado[i]);
    }
    int counter = resultado (a, sorteado, 50, tam);
    printf ("\nVoce acertou %d numeros!", counter);
    if (counter<15 || counter>20 || counter!=0) {
        printf ("\nVoce nao recebeu nenhum premio.");
    } else {
        printf ("\nParabens! Voce ganhou um premio.");
    }
}
int resultado (int x[], int r[], int num, int size) {
    int i, j, counter=0;
    for (i=0; i<num; i++) {
        for (j=0; j<size; j++) {
            if (x[i]==r[j]) {
                counter++;
            }
        }
    }
    return counter;
}
bool validar (int numeros[], int lim, int valor) {
    for (int i=0; i<lim; i++) {
        if (numeros[i]==valor) {
            return true;
        }
    }
    return false;
}