/*Escribir un programa que lea dos matrices de enteros y calcule la suma de los elementos
correspondientes, Cij = Aij + Bij*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int tam;
  printf("por favor digite el tamaño de filas de la matriz\n");
 scanf("%d",&tam);
  int Ma[tam][tam], Mb[tam][tam], Mc[tam][tam];

  ///////MATRIZ A
printf("Digite los valores para la matriz A\n");
  for(int i =0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
		scanf("%d",&Ma[i][j]);
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
//////////MATRIZ B
  printf("Digite los valores para la matriz B\n");
    for(int i =0;i<tam;i++)
  	{
  		for(int j=0;j<tam;j++)
  		{
  		scanf("%d",&Mb[i][j]);
  		}
  	}

  	for(int i =0;i<tam;i++)
  	{
  		for(int j=0;j<tam;j++)
  		{
  		printf("\t%d",Mb[i][j]);
  		}
  		printf("\n");
  	}
//////SUMA DE MATRIZ A Y B EN C
    for(int i =0;i<tam;i++)
    {
      for(int j=0;j<tam;j++)
      {
      Mc[i][j]=Ma[i][j]+Mb[i][j];
      }
    }

printf("La suma entre las dos mastrices es:\n");
    for(int i =0;i<tam;i++)
    {
      for(int j=0;j<tam;j++)
      {
      printf("\t%d",Mc[i][j]);
      }
      printf("\n");
    }
  return 0;
}
