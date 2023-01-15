/*Una compañía dedicada al alquiler de automoviles cobra un monto fijo de $300000 para
los primeros 300 km de recorrido. Para más de 300 km y hasta 1000 km, cobra un monto
adicional de $ 15.000 por cada kilómetro en exceso sobre 300. Para más de 1000 km cobra
un monto adicional de $ 10.000 por cada kilómetro en exceso sobre 1000. Los precios ya
incluyen el 20% del impuesto general a las ventas, IVA. Diseñe un algoritmo que determine
el monto a pagar por el alquiler de un vehículo y el monto incluído del impuesto.*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
int km,pago;

printf("Digite el número de kilometros que lleva. En enteros.\n");
scanf("%d", &km);


  if (km>0&&km<=300) {
    pago=3000000;
    } else{
    if (km>300&&km<=1000) {
      pago=3000000+((km-300)*15000);
    } else {
      if (km>1000) {
        pago=3000000+((km-300)*15000)+((km-1000)*10000);
      } else {
        printf("Ingrese un valor de kilometros valido.\n");
      }
    }
  }
  printf("El valor a pagar por el usuario es de %d pesos.\n", pago);
  return 0;
}
