#include <stdio.h>

int main(){
    char nama[100];char nim[100];char kelas[100];char ttl[100];char alamat[100];char hobby[100];char noHp[100];
    printf("Input \n");
    printf("Nama : ");
    gets(nama);
    printf("NIM : ");
    gets(nim);
    printf("Kelas paralel : ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir : ");
    gets(ttl);
    printf("Alamat : ");
    gets(alamat);
    printf("Hobby : ");
    gets(hobby);
    printf("No Hp : ");
    gets(noHp);
    
    printf("\nOutput \n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", noHp);
    return 0;
}