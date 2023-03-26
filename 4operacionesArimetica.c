#include <stdio.h>

int main() {

    int suma = 5 + 5;
    int resta = 5 - 5;
    int multi = 5 * 5;
    float divi = 25 / 5;
    int resto = 25 / 6 ;
    suma += 5;
    resta -= 5;
    multi *= 5;
    divi /= 1;
    resto %= 5;

    suma++;
    resta--;

    /*
     *  los mismo que cualquier lenguaje
     *  + , - , * , / , %
     *  += , -= , *= , /= , %=
     *  ++ , --     operadores incremento o  decremento
     */


    /*
     *  realice un programa que determine cual es la nota final de un alumno
     *  en una materia teniendo en cuenta que la nota final es el promedio
     *  de 2 examenes. (obtener el promedio de los 2 examenes)
     */   

    float examen1, examen2;
    printf("Ingresa la nota el primer examen");
    scanf("%f",&examen1); //esto es para que espere una respuesta el usuario
    printf("ingresa la segunda nota");
    scanf("%f",&examen2);

    float notafinal;
    notafinal = (examen1 + examen2) / 2;
    printf("La nora final es : %.2f", notafinal);
    
    return 0;
}