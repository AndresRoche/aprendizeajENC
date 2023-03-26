#include <stdio.h>
#include <stdbool.h>

int main() {

    int compraTotal = 2000;
    int producto = 'M';
    int CI = 2345325;
    int cantidadProducto = 5, gif;
    int porceDescuen = 50;
    bool rangCompra = (compraTotal > 1000) && (compraTotal < 5000);
    bool rangproducto = (producto == 'M') || (producto == 'A');
    bool cantidadProduc = (cantidadProducto > 3);

    int ultimoCI = CI % 10;
    
    if (rangCompra && rangproducto && cantidadProduc ){
        if((ultimoCI%2)==0){
            porceDescuen += 5;
        } else {
            porceDescuen += 3;
        }

        // codigo de ver quien dio mas 

        
    }

    return(0);
}