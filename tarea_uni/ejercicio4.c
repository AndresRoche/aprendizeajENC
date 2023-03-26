#include <stdio.h>

int main(){

    int hh, min, seg, segEnd;

    printf("Ingrese la hora , minutos y segundos en ese orden\n");
    scanf("%d%d%d",&hh,&min,&seg);

    segEnd = hh*3600 + min*60 + seg;

    printf("los segundos son : %d", segEnd);

    return 0;
}