/*Dado dos vectores A y B de 15 elementos cada uno, obtener un vector C donde la
posición i se almacene la suma de A[i]+B[i].*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num=15;
  int V[num]; // creo el vector
  int J[num];
  int X[num];
  int i, aux; // creo el contador


  //ENTRADA DE DATOS V
  printf("Ingrese los %d valores del vector 1\n", num);
  i=0;
  while(i < num) {
      scanf("%d", &aux);
      V[i] = aux;
      i=i+1;
  }

  //ENTRADA DE DATOS J
  i=0;
  printf("Ingrese los %d valores del vector 2\n", num);
  while(i < num) {
      scanf("%d", &aux);
      J[i] = aux;
      i=i+1;
  }

  for (i = 0; i <num; i++) {
    X[i]=V[i]+J[i];
  }

  printf("\n\n El vector 1: \n");
    for(i=0; i<num;i++)
    {
      printf("\n %d",V[i]);
     }

  printf("\n\n El vector 2: \n");
       for(i=0; i<num;i++)
       {
         printf("\n %d",J[i]);
        }
  printf("\n\n El vector 3 (1+2): \n");
             for(i=0; i<num;i++)
             {
               printf("\n %d",X[i]);
              }
  return 0;
}
