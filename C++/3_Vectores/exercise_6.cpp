/*Realice un algoritmo que cargue un vector con 10 elementos y determine la suma y
el producto de todos los elementos del vector. Además, calcule el promedio de los
elementos del vector y determine cuantos de los elementos del vector está por
debajo del promedio. Imprima la suma, el producto, el promedio y la cantidad de
elementos que están por debajo del promedio.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int V[10], i, suma=0, producto=1, promedio=0, debajo=0;

  printf("Ingrese los 10 valores que desea para su vector\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &V[i]);
    suma = suma + V[i];
    producto = producto * (V[i]);
  }
  promedio=suma/10;

  printf("La suma de los elementos del vector es de: %d.\n", suma);
  printf("El producto de los elementos del vector es de: %d.\n", producto);
  printf("El promedio de los elementos del vector es de: %d.\n", promedio);

  printf("\nLos numeros que están por debajo del promedio son: \n");
    for(i=0; i<10;i++)
    {
      if (V[i]<promedio) {
        printf("\n %d\n",V[i]);
        debajo =debajo+1;
      }
      }
      printf("Para un total de %d numeros por debajo del promedio\n", debajo);
  return 0;
}
