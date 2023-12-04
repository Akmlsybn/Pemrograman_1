#include <stdio.h>

int main(){
    float nilai1;
    float nilai2;
    
    printf("Masukkan nilai pertama: ");
    scanf("%g", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai2);
    float hasil = nilai1+nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" nilai kedua \"%.1f\" adalah \"%.2f\"", nilai1, nilai2, hasil);

    return 0;
}