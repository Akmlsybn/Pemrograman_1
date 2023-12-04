#include <stdio.h>

int main (){
    int input;
    printf("Input\n");
    scanf("%d",&input);
    if (input == 0 ){
        printf("Output\n");
        printf("Nol\n");
    }
    else if (1 <= input && input < 10){
        printf("Output\n");
        printf("Satuan\n");
    }
    else if (10 <= input && input <= 19){
        printf("Output\n");
        printf("Belasan\n");
    }
    else if (20 <= input && input <= 99){
        printf("Output\n");
        printf("Puluhan\n");
    }
    else {
        printf("Output\n");
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    return 0;
}