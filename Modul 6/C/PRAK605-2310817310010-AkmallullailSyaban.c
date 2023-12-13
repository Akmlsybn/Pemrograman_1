#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int matriksA[n][n], result2[n][n];
    printf("Matriks A\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n"); 
    int matriksB[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        scanf("%d", &matriksB[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int result = 0;
            for (int k = 0; k < n; k++) {
                result += matriksA[i][k] * matriksB[k][j];
            }
            result2[i][j] = result;
        }
    }
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", result2[i][j]);
    }
    printf("\n");
    }
    return 0;
}