/*Determinar la cantidad de elementos negativos, positivos y cero de un vector dado.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num=0, pos=0,neg=0,cero=0;
  printf("Ingrese la cantidad de numeros que quiere en su vector\n");
  scanf("%d", &num);
  int V[num],i;
  printf("Ingrese los %d valores para su vector\n", num);
  for (i = 0; i < num; i++) {
    scanf("%d", &V[i]);

if (V[i]>0) {
  pos=pos+1;
}

if (V[i]<0) {
  neg=neg+1;
}

if (V[i]==0) {
  cero=cero+1;
}

    }
  printf("El vector tiene %d numeros negativos, %d postivos y %d ceros\n", neg,pos,cero);
  return 0;
}
