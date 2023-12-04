#include <stdio.h>

int main (){
    printf("Input\n");
    int nilai;
    scanf("%d",&nilai);
    if (nilai >= 80) {
        printf("Output\n");
        printf("A\n");
    }
    else if (nilai >= 70) {
        printf("Output\n");
        printf("B\n");
    }
    else if (nilai >= 60) {
        printf("Output\n");
        printf("C\n");
    }
    else if (nilai >= 50) {
        printf("Output\n");
        printf("D\n");
    }
    else {
        printf("Output\n");
        printf("E\n");
    }
}