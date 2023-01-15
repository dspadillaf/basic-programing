/*Escribir un programa que haga el producto de dos matrices 3x3.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int tam=3;
  int Ma[tam][tam], Mb[tam][tam], Mc[tam][tam];

  ///////MATRIZ A
printf("Digite los valores para la matriz A (3x3 | 9 valores)\n");
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
  printf("Digite los valores para la matriz B (3x3 | 9 valores)\n");
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
//////SUMA DE MULTIPLICACION A Y B EN C
// Necesitamos hacer esto por cada columna de la segunda matriz (B)
for (int a = 0; a < tam; a++) {
    // Dentro recorremos las filas de la primera (A)
    for (int i = 0; i < tam; i++) {
        int suma = 0;
        // Y cada columna de la primera (A)
        for (int j = 0; j < tam; j++) {
            // Multiplicamos y sumamos resultado
            suma += Ma[i][j] * Mb[j][a];
        }
        // Lo acomodamos dentro del producto
        Mc[i][a] = suma;
    }
}

printf("La multiplicación entre las dos mastrices es:\n");
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
