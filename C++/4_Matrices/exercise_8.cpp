/*Escriba un algoritmo que llene todas las filas pares con los números 1,2,3,...N, y las filas impares
con los números N,N-1,N-2,...1*/
#include <stdio.h>
  int main(int argc, char const *argv[]) {
    int tam;
    printf("Por favor digite el tamaño de filas de la matriz\n");
   scanf("%d",&tam);
    int Ma[tam][tam];

    ///////MATRIZ A
    int x=1,y=1;
    for(int i =0;i<tam;i++)
    {x=1;y=0;
      for(int j=0;j<tam;j++)
      {
        if ((i%2)==0) {
          Ma[i][j]=x;
          x=x+1;
        } else {
          Ma[i][j]=tam-y;
          y++;
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
