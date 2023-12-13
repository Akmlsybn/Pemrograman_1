#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int scan1[n1], scan2[n2];

    if (n1 != n2) {
        printf("Jumlah tidak sama");
    } else {
        for(int i = 0; i < n1; i++){
        scanf("%d", &scan1[i]);
        }
        for(int i = 0; i < n2; i++){
        scanf("%d", &scan2[i]);
        printf("%d ", scan1[i] * scan2[i]);
        }
    }
    return 0;
}