/*Calcular el jornal de un trabajador. Si trabaja 40 horas o menos se le paga $16 por hora. Si
trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por
cada hora extra.*/
#include <stdio.h>
int horas, pago;
void ingresovales(); void operaciones(); void results();

int main(int argc, char const *argv[]) {
ingresovales();
operaciones();
results();


  return 0;
}

void ingresovales(/* arguments */) {
  printf("Ingrese el número de horas laboradas\n");
  scanf("%d", &horas);
  return;
}

void operaciones(/* arguments */) {
  if (horas>0) {
    if (horas<=40) {
      pago=horas*16;
    } else {
      if (horas>40) {
        pago=((horas-40)*20)+(horas*16);
      }
    }
  } else {
    printf("Ingrese un número de horas valido\n");
  }
  return;
}

void results(/* arguments */) {
  printf("Usted recibirá un pago de %d dolares porque laboró %d horas.\n", pago,horas);
  return;
}
