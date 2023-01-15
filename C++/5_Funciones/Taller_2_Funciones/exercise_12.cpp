/*Realizar un algoritmo que calcule la media de N números positivos (donde N es un número
comprendido entre 15 y 20 incluidos) introducidos por teclado, suponiendo que los datos
se leen desde la terminal.*/
#include <stdio.h>
#include <stdlib.h> //permite los comandos exit abort, exit, return
int numeros=0, suma=0, num=0;
float media=0.0;
void ingresovalues(); void operaciones(); void result();

int main(int argc, char const *argv[]) {
ingresovalues();
operaciones();
result();
  return 0;
}

void ingresovalues() {
  printf("Ingrese la cantidad de numeros que va introdur\n");
  scanf("%d", &numeros);
  return;
}

void operaciones() {
   int i=1;
  while (i<=numeros) {
    printf("Ingresa el número %d, que debe estar entre 15 y 20.\n", i);
    scanf("%d", &num);
  if (num<0|num>20|num<15) {
    printf("\nIngrese el numero como se le solicita\n");
    operaciones();
  } else{
    suma=suma+num;
  }
  i=i+1;
  }
  media=suma/numeros;
  return;
}

void result() {
  printf("La media de los %d números ingresados es de %f.\n", numeros,media);
  return;
}
