/*Implementar un programa que me pregunte la dimensión de un a matriz y la opción a escoger: 1.-
todos 1, 2.- todos 0 3.- todos las diagonales(principal y secundaria) 1) y me imprima la matriz
seleccionada*/
#include <stdio.h>
  int main(int argc, char const *argv[]) {
    int tam;
    printf("Por favor digite el tamaño de filas de la matriz\n");
   scanf("%d",&tam);
    int Ma[tam][tam], Mb[tam][tam], Mc[tam][tam];
    int option;

  printf("Seleccione una opción: 1) Todos 1, 2) Todos 0, 3) Matriz principales y secundaria con 1. \n");
  scanf("%d", &option);


    ///////MATRIZ A

if (option==1) {
    for(int i =0;i<tam;i++)
  	{
  		for(int j=0;j<tam;j++)
  		{
  		Ma[i][j]=1;
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
} else {
  if (option==2) {
    for(int i =0;i<tam;i++)
  	{
  		for(int j=0;j<tam;j++)
  		{
  		Ma[i][j]=0;
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
  } else {
    int a =0;
    if (option==3) {
      for(int i =0;i<tam;i++)
    	{
        a++;
    		for(int j=0;j<tam;j++)
    		{
          if ((j==i)|(j==(tam-a))) {
            Ma[i][j]=1;
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
    } else {
      printf("Seleccione una opción valida\n");
    }
  }
}


  return 0;
}
