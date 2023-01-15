/*Diseñe una algoritmo que calcule dentro de un arreglo(vector):
La suma de números pares
La suma de números impares
La suma total de los elementos del arreglo.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num=0, pares=0,impares=0,total=0;
  printf("Ingrese la cantidad de numeros que quiere en su vector\n");
  scanf("%d", &num);
  int V[num],i;
  printf("Ingrese los %d valores para su vector\n", num);
  for (i = 0; i < num; i++) {
    scanf("%d", &V[i]);

if ((V[i]%2)==0) {
  pares=pares+V[i];
}

if ((V[i]%2)!=0) {
  impares=impares+V[i];
}


  total=total+V[i];


    }
  printf("La suma de pares da %d, de impares %d y la total es de %d.\n", pares,impares,total);
  return 0;
}
