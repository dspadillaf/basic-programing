/*Realizar un algoritmo que digitados 20 números por teclado determine cuantos están por
encima, igual y por debajo de la media. (promedio).*/
#include <stdio.h>
#include <stdlib.h> //permite los comandos exit abort, exit, return
int main(int argc, char const *argv[]) {
  int num=20, suma, promedio, encima=0, igual=0, debajo=0;
  int V[num],i;

  printf("Ingrese los %d valores para su vector\n", num);
  for (i = 0; i < num; i++) {
    scanf("%d", &V[i]);

    suma=suma+V[i];
    }
    promedio=suma/num;

    for (i = 0;i < num;i++) {
      if (V[i]>promedio) {
        encima=encima+1;
      } else{
        if (V[i]<promedio) {
          debajo=debajo+1;
        } else {
          igual=igual+1;
        }
      }
    }
  printf("El promedio de los %d es de : %d.\n", num,promedio);
  printf("Hay %d numeros por encima del promedio,\n", encima);
  printf("Hay %d numeros por debajo del promedio,\n", debajo);
  printf("Hay %d numeros son iguales al promedio,\n", igual);
  return 0;
}
