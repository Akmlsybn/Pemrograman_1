#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    int hitunghasil = nilai1-nilai2;
    if (hitunghasil < 0){
        return hitunghasil * -1;
    }
}

int mutlak(int nilai){
    return abs(nilai);
}

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    int Hasil = hitung(a,b)+hitung(c,d);
    printf("%d",mutlak(Hasil));
    return 0;
}