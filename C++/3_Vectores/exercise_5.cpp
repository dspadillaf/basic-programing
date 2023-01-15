/*Seleccionar los elementos de un arreglo X según el siguiente criterio
Si los números están comprendidos entre 0 y 49, ponerlos en el arreglo 1
Si los números están comprendidos entre 50 y 100, ponerlos en el arreglo 2
Si los números son mayores a 101 ponerlos en el arreglo 3.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

  int num, aux; //VECTORES VACIOS
  printf("Cuantos numeros quieres ingresar\n");
  scanf("%d", &num);
  int V[num], J[num], Z[num];
  int v1=0, v2=0, v3=0, i=0;

  printf("Ingrese los valores que quieres analizar\n");

  for (i = 0; i < num; i++) {
    scanf("%d", &aux);

if (aux>=0&&aux<=49) {
  V[v1] = aux;
  v1=v1+1;
  } else {
  if (aux>=50&&aux<=100) {
    J[v2] = aux;
    v2=v2+1;
  } else {
    if (aux>100) {
      Z[v3] = aux;
      v3=v3+1;
    } else {
      printf("Numero invalido\n");
      }
    }
  }
}

printf("\n El arreglo de numeros comprendidos entre 0 y 49: \n");
  for(i=0; i<v1;i++)
  {
    printf("\n %d\n",V[i]);
   }

   printf("\n El arreglo de numeros comprendidos entre 50 y 100: \n");
     for(i=0; i<v2;i++)
     {
       printf("\n %d\n",J[i]);
      }

      printf("\n El arreglo de numeros comprendidos de más de 100: \n");
        for(i=0; i<v3;i++)
        {
          printf("\n %d\n",Z[i]);
         }
  return 0;
}
