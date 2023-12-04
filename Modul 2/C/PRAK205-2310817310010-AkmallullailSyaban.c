#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    
    printf("Input\n");
    scanf("%f %f", &a, &b);
    
    float c = sqrt(b*b - a*a);
    float tinggi = a;
    float alas = c;
    float keliling = a + b + c;
    float luas = (alas * tinggi) / 2;

    printf("\nOutput\n");
    printf("Alas     = %.0f cm\n", alas);
    printf("Tinggi   = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas     = %.0f cm^2\n", luas);

    return 0;
}