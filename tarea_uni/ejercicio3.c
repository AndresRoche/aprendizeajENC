#include <stdio.h>
#include <math.h>

int main() {
    
    #define CAFE 0.72;
    #define AZUCAR 3;

    float euro, dineCafe,dineAzuc, sobrante;

    printf("ingrese su cantidad de euro\n");
    scanf("%f",&euro);

    dineAzuc = euro / 2;

    dineCafe = euro / 3;

    sobrante = euro - dineAzuc - dineCafe;


    printf("en azurcar son : %.2f \nen cafe son : %.2f \nlo sobrante : %.2f ", dineAzuc, dineCafe, sobrante);

    return 0;
}