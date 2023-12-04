#include <stdio.h>

int main (){
    int angka;
    printf("Input : ");
    scanf("%d", &angka);
    printf("Output\n");
    for (int i = 1; i <= angka; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = angka; i >= 1; i--){
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}