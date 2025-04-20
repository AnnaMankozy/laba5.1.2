#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, n;
    float A[10][10]; 

    printf("Vvedit rozmir kvadratnoyi matrytsi (N <= 10): ");
    scanf("%d", &n);

    printf("Vvedit elementy matrytsi A (%d x %d):\n", n, n);
    for (i = 0; i < n; i+=1){
        for (j = 0; j < n; j+=1) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < n; i+=1) {
        float product = 1;
        int found_positive = 0;
        for (j = 0; j < n; j+=1) {
            if (A[i][j] > 0) {  
                product *= A[i][j];
                found_positive = 1;
            }
        }

        if (found_positive){
            printf("Dobutok dodatnykh elementiv u ryadku %d: %.2f\n", i + 1, product);
        }
        else{
            printf("U ryadku %d nemaye dodatnykh elementiv\n", i + 1);
        }
    }

    getch();
}