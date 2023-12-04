#include <stdio.h>

int main(){
    float k = 5;
    float j = 14;
    float pi = 3.14;
    float r = (j/k) / (2*pi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", k);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", j);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    return 0;
}