#include <stdio.h>
#include <math.h>

int main() {
    int arista, voluCubo;
    printf("Ingrese la arista o lados el Cubo\n");
    scanf("%d",&arista);

    voluCubo = pow(arista, 3);

    printf("El volumen de tu cubo es : %d", voluCubo);

    return 0;
}