#include <stdio.h>

int main() {

    int a,b;
    printf("ingresa a , b\n");
    scanf("%d%d",&a,&b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("ahora a es : %d, y b es : %d", a,b);

    return 0;
}