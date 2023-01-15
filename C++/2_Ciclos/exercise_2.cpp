/*10 clientes cada uno va a comprar una moto y se percata que si lo compraba el día martes
tiene un descuento del 10%, luego si lo compra el día sábado tiene un descuento del 19% y
si es feriado un 23%, mostrar cuanto pagara cada cliente y cuantos escogieron la opción
1,2,3.*/
#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[]) {
  int precio, dia, preciofinal,descuento;
  int i=1;
while (i<=10) {
  printf("Ingrese el valor de la moto en pesos colombianos del cliente %d de 10\n", i);
  scanf("%d", &precio);
  printf("Ingrese el día que comprará la moto 1: Martes , 2: Sabado, 3: Domingo o feriado, 4: Otro dia\n");
  scanf("%d", &dia);

  if (dia>=1&&dia<=3) {
  if (dia==1) {
    descuento=(10*precio)/100;
    preciofinal=precio-descuento;
  } else {
    if (dia==2) {
      descuento=(19*precio)/100;
      preciofinal=precio-descuento;
    } else {
      if (dia==3) {
        descuento=(23*precio)/100;
        preciofinal=precio-descuento;
      }
    }
  }
  printf("El valor de la moto del cliente %d es de %d, al cual se le dió un descuento de %d.\n\n", i, preciofinal, descuento);
  } else{
    if (dia==4) {
      printf("El valor de la moto del cliente %d es de %d y no se le aplica ningun descuento.\n\n", i,precio);
    }else {
    printf("No se puede determinar elvalor para este cliente.\n\n");
  }
  }
  i=i+1;
}

return 0;
}
