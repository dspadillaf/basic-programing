/*Realizar un programa que contabilice de N personas que quieren ingresar a la universidad
cuantas lo pueden hacer y cuantas quedan accionados si: Para acceder se necesita tener
una puntaje de icfes entre 300 y 400 puntos, si tiene un puntaje entre 290 y menor de 300
queda accionado en caso contrario no puede ingresar. El número máximo de puntaje es
400 y el mínimo es 100.*/
#include <stdio.h>
#include <stdlib.h> //permite los comandos exit abort, exit, return
int personas, pasan=0, accionadas=0, nopasan=0, puntaje;
void ingresovalues(); void operaciones(); void results();

int main(int argc, char const *argv[]) {

ingresovalues();
operaciones();
results();

return 0;
}

void ingresovalues() {
  printf("Ingrese el número de personas que se presentaron\n");
  scanf("%d", &personas);
  return;
}

void operaciones() {
  int i = 1;
  while (i<=personas) {
    printf("Ingrese el puntaje que obtuvo la personas %d.\n", i);
    scanf("%d", &puntaje);
    if (puntaje>=100 && puntaje<=400) {
      if (puntaje>=300) {
        pasan=pasan+1;
      } else {
        if (puntaje>=290 && puntaje<300) {
          accionadas=accionadas+1;
        } else {
          nopasan=nopasan+1;
        }
      }
    } else {
      printf("Su puntaje tiene incongruencias, debe estar entre 100 y 400.\n");
      abort();
    }
    i=i+1;
  }
  return;
}

void results() {
  printf("Las personas que pasaron fueron %d\n", pasan);
  printf("Las personas que no pasaron fueron %d\n", nopasan);
  printf("Las personas que quedan accionadas fueron %d\n", accionadas);
  return;
}
