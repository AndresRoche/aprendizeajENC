#include <stdio.h>

int main() {
    int num, res;

    printf("Ingresa un numero\n");
    scanf("%d",&num);

    res = (num%2) ==0;

    if(res){
        printf("tu numero es par");
    } else {
        printf("tu numero no es Par");
    }

    return 0;
}