#include <stdio.h>

int main() {

    #define EUROADOLARES 166.386;

    int dolares;
    float euro;

    printf("Ingresa Los Dolares\n");
    scanf("%d",&dolares);

    euro = dolares / EUROADOLARES;

    printf("tenemos en euro : %f", euro);

    return 0;
}