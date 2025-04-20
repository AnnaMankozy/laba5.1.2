#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, n;
    float A[10][10], X[10], B[10];

    printf("Vvedit rozmir kvadratnoyi matrytsi (N <= 10): ");
    scanf("%d", &n);

    printf("\nVvedit elementy matrytsi A (%d x %d):\n", n, n);
    for (i = 0; i < n; i+=1){
        for (j = 0; j < n; j+=1) {
        printf("A[%d][%d] = ", i + 1, j + 1);
        scanf("%f", &A[i][j]);
        }
    }
    printf("\nVvedit elementy vektora X (%d elementiv):\n", n);
    for (j = 0; j < n; j+=1) {
        printf("X[%d] = ", j + 1);
        scanf("%f", &X[j]);
    }

    for (i = 0; i < n; i+=1) {
        B[i] = 0;
        for (j = 0; j < n; j+=1) {
            B[i] += A[i][j] * X[j];
        }
    }

    printf("\nVektor B (skaljarni dobutky):\n");
    for (i = 0; i < n; i+=1) {
        printf("B[%d] = %.2f\n", i + 1, B[i]);
    }

    getch();
}