/*En una tienda de descuento se efectúa una promoción en la cual se hace un descuento
sobre el valor de la compra total según el color de la bolita que el cliente saque al pagar en
caja. Si la bolita es de color blanco no se le hará descuento alguno, si es verde se le hará un
10% de descuento, si es amarilla un 25%, si es azul un 50% y si es roja un 100%.
Determinar la cantidad final que el cliente deberá pagar por su compra se sabe que solo
hay bolitas de los colores mencionados.*/
#include <stdio.h>
#include <iostream> //para que valga el string
#include <string> // para que tome el string

using namespace std; //permite el uso de string sin necesidad de poner std::string, si no se usa debe declararse así std::

int main(int argc, char const *argv[]) {
  int total, final, porcentaje, descuento;
  string bolita;
  printf("Ingrese el valor total de la compra\n");
  scanf("%d", &total);
  printf("¿Que color sacó el cliente? blanco, verde, amarillo, azul, rojo.\n");
  cin>>bolita;

if (total<0) {
  printf("Ingrese un valor de compra valido\n");
} else {
  if ((bolita=="blanco")|(bolita=="Blanco")|(bolita=="amarillo")|(bolita=="Amarillo")|(bolita=="azul")|(bolita=="Azul")|(bolita=="rojo")|(bolita=="Rojo")|(bolita=="verde")|(bolita=="Verde")) {
    if ((bolita=="blanco")|(bolita=="Blanco")) {
      porcentaje=0;
    } else {
      if ((bolita=="verde")|(bolita=="Verde")) {
        porcentaje=10;
      } else {
        if ((bolita=="amarillo")|(bolita=="Amarillo")) {
          porcentaje=25;
        } else {
          if ((bolita=="azul")|(bolita=="Azul")) {
            porcentaje=50;
          } else {
            if ((bolita=="rojo")|(bolita=="Rojo")) {
              porcentaje=100;
            }
          }
        }
      }
    }
    descuento=((total*porcentaje)/100);
    final=total-descuento;
    printf("El valor final de la compra es de %d, que se le aplicó un descuento de %d que corresponde al %d%%.\n", final,descuento,porcentaje);
  } else {
    printf("Ingrese un color valido\n");
  }
}

  return 0;
}
