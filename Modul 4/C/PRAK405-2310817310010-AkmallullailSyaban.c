#include <stdio.h>

int main(){
    int a, b, i, j, hasil1 = 0, hasil2 = 0, total;
    printf("Input :\n");
    scanf("%d %d", &a, &b);
    printf("Output\n");
    for (int i = 1; i <= a; i++){
        total = i * b;
        hasil1 += total;
        if(i == 1){
            printf("(%d * %d) = %d\n", i, b, total);
        } else {
            for (int j = i; j >= 1; j--){
                printf("(%d * %d)", j, b);
            if (j > 1){
                printf(" + ");
                }
            }
        printf(" = %d \n", hasil1);
    }
    hasil2 += hasil1;
    }
    printf("%d", hasil2);
    return 0;
}