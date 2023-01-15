/*Realizar un programa en pseudo-código que nos diga si una persona puede acceder a la
universidad o no. Para acceder se necesita tener una puntaje de icfes entre 300 y 400
puntos, si tiene un puntaje entre 290 y menor de 300 queda accionado en caso contrario
no puede ingresar. El número máximo de puntaje es 400 y el mínimo es 100.*/
#include <stdio.h>
int puntaje=0;
void ingresovalues(); void ejecutar();
int main(int argc, char const *argv[]) {
  ingresovalues();
  ejecutar();
  return 0;
}

void ingresovalues() {
  printf("Por favor ingrese cuanto puntaje obtuvo en el ICFEs.\n");
  scanf("%d", &puntaje);
  return;
}

void ejecutar() {
  if (puntaje>=100 && puntaje<=400) {
    if (puntaje>=300) {
      printf("Usted quedó admitido a la universidad. Ya que su puntaje está entre 300 y 400.\n");
    } else {
      if (puntaje>=290 && puntaje<300) {
        printf("Usted quedó como accionado. Ya que su puntaje está entre 290 y 300.\n");
      } else {
        printf("Usted no fue admitido a la universidad ya que su puntaje es menor a 290.\n");
      }
    }
  } else {
    printf("Su puntaje tiene incongruencias, debe estar entre 100 y 400.\n");
  }
  return;
}
