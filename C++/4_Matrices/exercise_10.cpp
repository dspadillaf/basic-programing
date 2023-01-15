/*Diseñe un algoritmo que me ordene los elementos de una matriz.*/
#include <iostream>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int tam;
  printf("por favor digite el tamaño de filas de la matriz\n");
 scanf("%d",&tam);
  int Ma[tam][tam];
  int menor=0;

  ///////MATRIZ A
printf("Digite los valores para la matriz A\n");
  for(int i =0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
		scanf("%d",&Ma[i][j]);
		}
	}

     //ordeno la matriz de mayor a menor
     for(int i=0; i<tam; i++)
     {
        for(int j=0; j<tam; j++)
        {
            for(int x=0; x<tam;x++)
            {
                for(int y=0; y<tam; y++)
                {
                    if(Ma[i][j]<Ma[x][y])
                    {
                        menor=Ma[i][j];
                        Ma[i][j]=Ma[x][y];
                        Ma[x][y]=menor;
                    }

                }
            }
         }
    }

    //imprimo la matriz como ordenada
    printf("\nLos Datos De La Matriz Fueron Ordenados de Menor a Mayor\n");
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
