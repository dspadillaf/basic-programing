/*Escriba un algoritmo que permita invertir un arreglos de n elementos enteros*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

int num;
printf("Ingrese la cantidad de numeros que quiere en su vector\n");
scanf("%d", &num);
int V[num]; // creo el vector
int aux; // creo un auxiliar
int temp; //variable temporal
int i=0; // creo el contador

//ENTRADA DE DATOS
printf("Ingrese los %d valores del vector\n", num);
while(i < num) {
    scanf("%d", &aux);
    V[i] = aux;
    i=i+1;
}

//SWAP
i = 0;
while(i < num/2)
{
    temp = V[i];
    V[i] = V[num - 1 - i];
    V[num - 1 - i] = temp;
    i=i+1;
}

printf("\n El vector invertido es \n");
  for(i=0; i<num;i++)
  {
    printf("\n %d",V[i]);
   }
}
