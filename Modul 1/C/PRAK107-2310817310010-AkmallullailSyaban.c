#include <stdio.h>

int main (){
    int x = 4;
    int y = 5;
    int z = 7;
    int harga = 85000;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut turut adalah %d,%d,%d\n", x, y, z);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", x+y+z);
    printf("Harga tanah per meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah Rp %d\n",(x*harga)+(y*harga)+(z*harga));

    return 0;
}