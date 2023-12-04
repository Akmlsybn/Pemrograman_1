#include <stdio.h>

int main (){
    printf("Input\n");
    int nilai;
    scanf("%d",&nilai);
    if (nilai > 0 ){
        printf("Output\n");
        printf("Positif\n");
    }
    else if (nilai < 0)
    {
        printf("Output\n");
        printf("Negatif\n");
    }
    else {
        printf("Output\n");
        printf("Nol\n");
    }
}