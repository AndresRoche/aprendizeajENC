#include <stdio.h>

//Constantes
//para la declaracion de constante se usa #define
// y si o si debe de estar en mayusculas
#define PI 3.14;
#define EDAD 24;

//Variables
//TipoDeDato Nombre 0 Valor; --> varibles
float sueldo = 12.3423;

//siempre iniciara con un main
int main () {
    // nuestros comentarios

    /* 
        %c unico caracter
        %d entero
        %u entero sin signo en base decimal
        %o entero en base octal
        %x entero en base hexadecimal
        %e un numero real en coma flotante, con exponente
        %f un numero real en coma flotante, sin exponente
        %s una cadena de caracteres
        %p puntero o direccion de memoria
    */

   // NOTA puedes usar "%.2f" para decir que solo quieres dos decimales+
   //   ejemplo en la clase 4

    int edad = 34;
    int edad2 = 53;
    //con los printf si o si debe ser comillas doble ""
    //printf("La segunda edad es : %d \n- y la Primera es : %d",edad2, edad);







    float sueldo2 = 25.456;
    float bono = 4.560;
    sueldo2 += bono; 

    printf("%f", sueldo2);




    //tambien hay que colocar el return 0; si o si
    return 0;
}