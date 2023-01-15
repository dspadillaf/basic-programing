/*Escriba un algoritmo que llene la diagonal principal de la matriz con los números 1,2,3,...N. La
diagonal principal de una matriz está formada por las casillas en las
cuales el índice de fila y de columna son iguales*/
#include <stdio.h>
  int main(int argc, char const *argv[]) {
    int tam;
    printf("Por favor digite el tamaño de filas de la matriz\n");
   scanf("%d",&tam);
    int Ma[tam][tam];

    ///////MATRIZ A
    int x=1;
    for(int i =0;i<tam;i++)
    {
      for(int j=0;j<tam;j++)
      {
        if (j==i) {
          Ma[i][j]=x;
          x=x+1;
        } else {
          Ma[i][j]=0;
        }
              }
    }

    for(int i =0;i<tam;i++)
    {
      for(int j=0;j<tam;j++)
      {
      printf("\t%d",Ma[i][j]);
      }
      printf("\n");
    }

  return 0;
}
