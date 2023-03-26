#include <stdio.h>

int main() {

    int num, temp, tempR, digits = 0;
    int numInv = 0,
        num_3 = 0,
        num_5 = 0;
    printf("ingresa un numeros\n");
    scanf("%d", &num);

    temp = num;

    // bucle para saber cuentos digitos tiene para el bucle for
    while (temp > 0){
        temp = temp / 10;
        digits++;
    }
    
    temp = num;
    int i;
    for (i = 0; i < digits; i++){
        tempR = temp % 10;
        temp = temp / 10;
            

        //numInv = (i != digits-1)?(numInv + tempR)*10:(numInv + tempR);
        
        
        if(tempR == 5 ){num_5++;}
        if(tempR == 3 ){num_3++;}


        if(i != digits-1){
            numInv = (numInv + tempR)*10;
        } else {
            numInv = (numInv + tempR);
        }
        
    }


    if(num >= 100){
        printf("Numero invertido es %d\n\n", numInv);
    }

    if (num_3 != 0){
        printf("las veces que sale el 3 son %d\n", num_3);
    }
    
    if (num_5 != 0){
        printf("las veces que sale el 5 son %d\n", num_5);
    }
    return(0);
}