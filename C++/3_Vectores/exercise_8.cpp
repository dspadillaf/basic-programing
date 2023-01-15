/*Realice un algoritmo que cargue un vector con 20 elementos, luego ordene los
elementos leídos de forma ascendente. En otro vector, ordene los mismos elementos
de forma descendente y por último, tome los dos vectores anteriores y multiplique
su contenido y cargue su resultado en un tercer vector. Imprima los tres vectores
resultantes.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

  int num=20;
  int V[num]; // creo el vector
  int J[num]; // vector invertido
  int X[num]; // vector multiplicado
  int aux; // creo un auxiliar
  int temp; //variable temporal
  int i=0, j; // creo el contador


  //ENTRADA DE DATOS
  printf("Ingrese los %d valores del vector\n", num);
  while(i < num) {
      scanf("%d", &aux);
      V[i] = aux;
      i=i+1;
  }

//ORDENARLO
  for(i=0; i<num;i++)
  {
    for(j=i+1;j<=(num-1);j++)
    {
      if (V[j] < V[i])
      {
        aux=V[i];
        V[i]=V[j];
        V[j]=aux;
  }
  }
}

////INVERTIRLO
i = 0;
while(i < num/2)
{
    temp = V[i];
    J[i] = V[num - 1 - i];
    J[num - 1 - i] = temp;
    i=i+1;
}

//MULTIPLICACION
for (i = 0; i < num; i++) {
X[i]=V[i]*J[i];
}

printf("\n\n El vector 1 organizado de forma ascendente: \n");
  for(i=0; i<num;i++)
  {
    printf("\n %d",V[i]);
   }

printf("\n\n El vector 2 organizado de a la inversa del 1: \n");
     for(i=0; i<num;i++)
     {
       printf("\n %d",J[i]);
      }
printf("\n\n El vector 3 organizado que es la multiplicacion de ambos: \n");
           for(i=0; i<num;i++)
           {
             printf("\n %d",X[i]);
            }
  return 0;
}
