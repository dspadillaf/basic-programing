/*Un cliente va a comprar una moto y se percata que si lo compraba el día martes tiene un
descuento del 10%, luego si lo compra el día sábado tiene un descuento del 19% y si es
feriado un 23%, mostrar cuanto pagara en cada opción.*/
#include <stdio.h>
#include <iostream>
int precio, dia, preciofinal,descuento;
void ingresovalues(); int operaciones();
int main(int argc, char const *argv[]) {
  ingresovalues();
  operaciones();
  return 0;
}

void ingresovalues() {
  printf("Ingrese el valor de la moto en pesos colombianos\n");
  scanf("%d", &precio);
  printf("Ingrese el día que comprará la moto 1: Martes , 2: Sabado, 3: Domingo o feriado, 4: Otro dia\n");
  scanf("%d", &dia);
  return;
}

int operaciones() {
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
  printf("El valor de la moto es de %d, al cual se le dió un descuento de %d.\n", preciofinal, descuento);
  } else{
    if (dia==4) {
      printf("El valor de la moto es de %d y no se le aplica ningun descuento.\n", precio);
    }else {
    printf("Ingreso una opción de día no valida.\n");
  }
  }
  return 0;
}
