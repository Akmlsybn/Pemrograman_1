#include <stdio.h>

int main() {
    int jumlahRuangan;
    scanf("%d", &jumlahRuangan);

    int zetsu[jumlahRuangan];

    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < jumlahRuangan; i++) {
        int totalZetsu = zetsu[i] * (i + 1);
        printf("%d ", totalZetsu);
    }
    return 0;
}