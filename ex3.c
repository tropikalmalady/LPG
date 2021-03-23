#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int main()
{
    int n1[3][4], n2[3][4], m1[3][4], m2[3][4], i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
           printf ("\nDigite o valor da matriz N1 da posicao [%d][%d]: ",i+1, j+1);
           scanf ("%d", &n1[i][j]);  
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
           printf ("\nDigite o valor da matriz N2 da posicao [%d][%d]: ",i+1, j+1);
           scanf ("%d", &n2[i][j]);  
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            m1[i][j] = n1[i][j] + n2[i][j];
            m2[i][j] = n1[i][j] - n2[i][j];
        }
    }
    printf ("\nA matriz N1 eh:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf ("%5d", n1[i][j]);
        } 
        printf ("\n");
    }
    printf ("\nA matriz N2 eh:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf ("%5d", n2[i][j]);
        } 
        printf ("\n");
    }
    printf ("\nA matriz soma eh:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf ("%5d", m1[i][j]);
        } 
        printf ("\n");
    }
    printf ("\nA matriz subtracao eh:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf ("%5d", m2[i][j]);
        } 
        printf ("\n");
    }
}
