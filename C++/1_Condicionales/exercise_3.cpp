/*Calcular el salario mensual de un empleado de una empresa, sabiendo que este se calcula
en base a las horas semanales trabajadas y de acuerdo a un precio especificado por hora.
Si se pasa de cuarenta horas semanales, las horas extras se pagarán a razón de 1.5 veces la
hora ordinaria*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int horas,precio,pagar;
  printf("Ingrese sus horas trabajadas durante esta semana\n");
  scanf("%d", &horas);
  printf("Ingrese el valor que cobra la hora\n");
  scanf("%d", &precio);

  if (horas>40) {
    pagar=((horas-40)*precio*1.5)+(40*precio);
    printf("Esta semana se le pagarán %d pesos colombianos\n", pagar);
  } else {
    pagar=horas*precio;
    printf("Esta semana se le pagarán %d pesos colombianos\n", pagar);
  }

  return 0;
}
