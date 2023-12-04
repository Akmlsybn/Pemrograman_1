#include <stdio.h>
int reverse(int nilai){
// Lengkapi Function ini
    int reversed = 0;
    while (nilai != 0){
        int digit = nilai % 10;
        reversed = reversed * 10 + digit;
        nilai /= 10;
    }
    return reversed;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}