#include <stdio.h>

int main (){
    float program, a, b, hasil;
    while (1){
        printf("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n5.Exit\n");
        printf("Masukkan Pilihan :");
        scanf("%f", &program);
        if (program < 1 || program > 5){
            printf("Input anda salah, silahkan coba lagi\n\n");
        } else if (program == 5){
            printf("Terimakasih, telah menggunakan kalkulator Akmallullail Sya'ban");
            break;
        }
        if (program == 1){
            printf("Masukkan Nilai Pertama :");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua :");
            scanf("%f", &b);
            hasil = a + b;
            printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n\n", a, b, hasil);}
        else if(program == 2){
            printf("Masukkan Nilai Pertama :");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua :");
            scanf("%f", &b);
            hasil = a - b;
            printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n", a, b, hasil);}
        else if(program == 3){
            printf("Masukkan Nilai Pertama :");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua :");
            scanf("%f", &b);
            hasil = a * b;
            printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n\n", a, b, hasil);}
        else if(program == 4){
            printf("Masukkan Nilai Pertama :");
            scanf("%f", &a);
            printf("Masukkan Nilai Kedua :");
            scanf("%f", &b);
            hasil = a / b;
            printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n\n", a, b, hasil);}
    }
    return 0;
}