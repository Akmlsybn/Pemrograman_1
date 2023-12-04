#include <stdio.h>

int main (){
    printf("Input : ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Output\n");
    printf("%d %d", a, b);
    if (a > b){
        for (int i = 1; i <= a - b;i++){
            printf(" - %d %d",a - i, b + i);} 
    } else {
        for (int i = 1; i <= b - a; i++) {
            printf(" - %d %d", a + i, b - i);}
    }
    return 0;
}