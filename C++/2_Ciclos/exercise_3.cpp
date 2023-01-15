/*Realizar un algoritmo que permita digitar por teclado 15 números y que los visualice por
la pantalla del menor al mayor de los números digitados.*/
#include <stdio.h>
int main()
{
 int  V[15], i, j, aux;

printf("\n Por favor digite los numeros\n");
    for(i=0; i<15;i++)
    {
      scanf("%d",&V[i]);
     }

    for(i=0; i<=13;i++)
    {
      for(j=i+1;j<=14;j++)
      {
      	if (V[j] < V[i])
      	{
      		aux=V[i];
      		V[i]=V[j];
      		V[j]=aux;
		}
	  }
     }

printf("\n Los números organizados son: \n");
    for(i=0; i<8;i++)
    {
      printf("\n %d",V[i]);
     }
return 0;
}
