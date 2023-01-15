/*Leer una secuencia de 20 números almacenarlos en un vector y mostrar la posición
donde se encuentra el mayor valor leído.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

  int num=20;
  int V[num]; // creo el vector
  int mayor =0;
  int posicion =0;
  int i, aux; // creo el contador


  //ENTRADA DE DATOS
  printf("Ingrese los %d valores del vector\n", num);
  while(i <= num) {
      scanf("%d", &aux);
      V[i] = aux;
      i=i+1;
  }

for (i = 0; i < num; i++) {
  if (V[i]>mayor) {
    mayor=V[i];
    posicion=i;
  }
}

printf("El valor mayor es %d y está en la posición %d.\n", mayor,posicion);


  return 0;
}
