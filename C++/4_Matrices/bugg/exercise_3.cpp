/*Escribir un programa que me de el máximo y el mínimo número de una matriz introducido por el
usuario por teclado.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int tam;
  printf("por favor digite el tamaño de filas de la matriz\n");
 scanf("%d",&tam);
  int Ma[tam][tam], Mb[tam][tam], Mc[tam][tam];
  int min=999999999, max=0;

  ///////MATRIZ A
printf("Digite los valores para la matriz A\n");
  for(int i =0;i<tam;i++)	{
		for(int j=0;j<tam;j++)		{
		scanf("%d",&Ma[i][j]);
    if (Ma[i][j]>max) {
      max=Ma[i][j];
    }
    if (Ma[i][j]<min) {
      min=Ma[i][j];
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

  printf("El numero minimo dentro de la matriz es: %d y el máximo es: %d\n", min,max);

  return 0;
}
