#include <stdio.h>
#include <string.h>

int main() {
    char str1[99], str2[99];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else {
        int asterik = 0, pagar = 0;
        for (int i = 0; i < strlen(str1); i++) {
            if (str1[i] == ' ' && str2[i] == ' ') {
                printf(" ");
            } else if (str1[i] != str2[i]) {
                printf("#");
                pagar++;
            } else {
                printf("*");
                asterik++;
            }
        }
        printf("\n* =%d\n", asterik);
        printf("# =%d\n", pagar);
        if (asterik > pagar) {
            printf("Pesan Asli");
        } else {
            printf("Pesan palsu");
        }
    }
    return 0;
}