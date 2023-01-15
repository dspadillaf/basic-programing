/*Realizar un algoritmo que digite 8 número por teclado y muestre por pantalla el número
mayor y el número menor.*/
#include <stdio.h>
int main(){
  int v1,v2,v3,v4,v5,v6,v7,v8;
  printf("Ingrese 8 numeros enteros.\n");
  scanf("%d %d %d %d %d %d %d %d", &v1,&v2,&v3,&v4,&v5,&v6,&v7,&v8);
	int numeros[] = {v1, v2, v3, v4, v5, v6, v7, v8};
	int mayor, menor;
	mayor = menor = numeros[0];

	for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); ++i)
	{
		if (numeros[i] > mayor) mayor = numeros[i];
		if (numeros[i] < menor) menor = numeros[i];
	}
	printf("El mayor es %d y el menor es %d\n", mayor, menor);
}
