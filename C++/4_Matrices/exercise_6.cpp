/*6. Escriba un algoritmo que ponga cero en la primera y la última fila, y en la primera y
la última columna de la matriz.*/

#include <stdio.h>
  int main(int argc, char const *argv[]) {
    int tam;
    printf("Por favor digite el tamaño de filas de la matriz\n");
   scanf("%d",&tam);
    int Ma[tam][tam], Mb[tam][tam];

//OPCION EN LAS ESQUINAS//
/*    printf("Digite los valores para la matriz A\n");
      for(int i =0;i<tam;i++)
    	{
    		for(int j=0;j<tam;j++)
    		{
    		scanf("%d",&Ma[i][j]);
        if ((i==0&&j==0)|(i==0&&j==tam-1)|(i==tam-1&&j==0)|(i==tam-1&&j==tam-1)) {
          Ma[i][j]=0;
        }
    		}
    	}
      */
  //OPCION EN TODA LA FILA Y COLUMNA COMPLETA//
          printf("Digite los valores para la matriz A\n");
            for(int i =0;i<tam;i++)
          	{
          		for(int j=0;j<tam;j++)
          		{
          		scanf("%d",&Ma[i][j]);
              if ((i==0)|(j==0)|(i==tam-1)|(j==tam-1)) {
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
