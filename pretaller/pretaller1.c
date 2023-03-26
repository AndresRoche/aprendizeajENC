#include <stdio.h>

int main(){

    int num1, num2;
    int divi1 = 0,
        divi2 = 0;
    int i = 1;

    printf("Ingresa dos numeros\n");
    scanf("%d%d", &num1, &num2);

    while(i < num1) {
        if((num1 % i) == 0) {
            divi1 += i;
        }
        i++;
    }

    i = 1;
    while(i < num2) {
        if((num2 % i) == 0) {
            divi2 += i;
        }
        i++;
    }

    if((divi1 == num2) && (divi2 == num1)){
        printf("Felicidades tus numeros son amigos");
    } else {
        printf("Tus numeros no son amigos");
    }

    return(0);
}