#include <stdio.h>

int main() {
    int num1, num2, num3, res;

    printf("Ingresa un numero\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 > num2 && num1 > num3) {
        res = num1;
    } else if (num2 > num1 && num2 > num3) {
        res = num2;
    } else {
        res = num3;
    }
    
    printf("este es el numero mayor %d", res);

    return 0;
}