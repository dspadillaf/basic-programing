/*Diseñe un algoritmo que multiplique una matriz con un vector. Se debe saber las reglas para
realizarlo.*/
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int tam,i;
  printf("por favor digite el tamaño de filas de la matriz y del vector\n");
 scanf("%d",&tam);
  int Ma[tam][tam], Va[tam], Vb[tam];


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
//////////VECTOR B
printf("Digite los valores para el vector A\n");
for (i = 0; i < tam; i++) {
  scanf("%d", &Va[i]);
}

for(i=0; i< tam;i++)
{
  printf("\n%d\n",Va[i]);
 }



////MULTIPLICACION
    for (int i=0;i<tam;i++){
         Vb[i]=0;
    }
    for (int i=0;i<tam;i++){
        for (int j=0;j<tam;j++){
            Vb[i]+=( Ma[i][j]*Va[j]);
        }
    }

///PRINT
printf("La multiplicación entre la Matriz y el Vector es:\n");
for(i=0; i< tam;i++)
{
  printf("%d\n",Vb[i]);
 }



    return 0;
}
