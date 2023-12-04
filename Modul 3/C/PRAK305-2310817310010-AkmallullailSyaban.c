#include <stdio.h>

int main (){
    printf("input\n");
    int CekHari, CekJam, CekMenit, detik;
    scanf("%d",&detik);
    CekHari = detik / 86400;
    detik = detik % 86400;
    CekJam = detik / 3600;
    detik = detik % 3600;
    CekMenit = detik / 60;
    detik = detik % 60;
    if (CekHari > 0){
        printf("Output\n");
        printf("%d hari %.2d:%.2d:%.2d\n",CekHari,CekJam,CekMenit,detik);
    }
    else {
        printf("Output\n");
        printf("%.2d:%.2d:%.2d\n",CekJam,CekMenit,detik);
    }
}