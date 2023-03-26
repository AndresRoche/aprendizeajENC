#include <stdio.h>

int main(){

    float examen1, examen2, examen3, notaFinal;
    
    printf("ingresa los examenes por orden de \nprimer examen 1\nsegundo examen 2\ntercer examen 3\n");
    scanf("%f%f%f",&examen1,&examen2,&examen3);

    notaFinal = (examen1 + examen2 + examen3) / 3;
    printf("Nota final : %.2f",notaFinal);

    return 0;
} 