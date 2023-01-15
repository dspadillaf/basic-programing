/*Ingresar n temperaturas a un vector y calcular su media, y que muestre además las
temperaturas más altas y más bajas.*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numtem;
  printf("Ingresa el número de temperaturas que vas a ingresar\n");
  scanf("%d", &numtem);
  int V[numtem], i, j, aux, suma, media;

  printf("Ingrese los valores de temperatura (%d valores)\n", numtem);
  for (i = 0; i < numtem; i++) {
    scanf("%d", &V[i]);
    suma = suma + V[i];
  }
media = suma/numtem;


  for(i=0; i<=numtem;i++)
  {
    for(j=i+1;j<=(numtem-1);j++)
    {
      if (V[j] < V[i])
      {
        aux=V[i];
        V[i]=V[j];
        V[j]=aux;
  }
  }
   }

printf("\n Las temperaturas organizadas de menor a mayor son organizados son: \n");
  for(i=0; i<numtem;i++)
  {
    printf("\n %d",V[i]);
   }
printf("\nLa media de temperatura es: %d\n", media);


  return 0;
}
