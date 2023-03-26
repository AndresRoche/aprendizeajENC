#include <stdio.h>
#include <math.h>

int main () {

  float precioMedicamento, descuento, montoPagar;
  printf("Introduca el pre del medicamento: ");
  scanf("%g", &precioMedicamento);
  descuento = precioMedicamento * 0.35;
  montoPagar = precioMedicamento - descuento;
  printf("Precios del medicamentos : $%g\n", precioMedicamento);
  printf("Precios del descuento : $%g\n", descuento);
  printf("Precios del montoPagar : $%g\n", montoPagar);








  // float area, radio;
  // const float PI = 3.14159;
  // printf("Introduzca el radio del circulo: ");
  // scanf("%g", &radio);
  // area = PI * radio * radio;
  // printf("El area del circulo es %g", area);
  return 0;
}
