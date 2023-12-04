#include <stdio.h>

int main (){
    printf("Input\n");
    int a,b;
    scanf("%d %d",&a,&b);

    if(b < a) {
        printf("Output\n");
        printf("%d %d\n",b,a);
    }
    else {
        printf("Output\n");
        printf("%d %d\n",a,b);
    }
}