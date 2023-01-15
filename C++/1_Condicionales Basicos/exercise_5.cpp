/*Un cliente va a comprar una moto y se percata que si lo compraba el día martes tiene un
descuento del 12%, luego si lo compra el día sábado tiene un descuento del 18% y si es
feriado un 25%, mostrar cuanto pagara en cada opción.*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int dia, total,precio, porcentaje, descuento;
  printf("Ingrese el valor de la moto\n");
  scanf("%d", &precio);
  printf("Ingrese el día que comprará la moto 1: Martes , 2: Sabado, 3: Domingo o feriado, 4: Otro dia\n");
  scanf("%d", &dia);

if (dia>=1&&dia<=3) {
  if (dia==1) {
    porcentaje=12;
  } else {
    if (dia==2) {
      porcentaje=18;
    } else {
      if (dia==3) {
        porcentaje=25;
      }
    }
  }
  descuento=((precio*porcentaje)/100);
  total=precio-descuento;
  printf("El valor final de la moto es de %d, se le aplico un descuento de %d, que corresponde al %d%%.\n", total, descuento, porcentaje);
} else{
  if (dia==4) {
    printf("El valor de la moto es de %d y no se le aplica ningun descuento.\n", precio);
  }else {
  printf("Ingreso una opción de día no valida.\n");
}
}
  return 0;
}
