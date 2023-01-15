/*Dados tres números, determinar si la suma de cualquier pareja de ellos es igual al tercer
número. Si se cumple esta condición, escribir “Iguales” en caso contrario escribir
“Distintos”.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int v1,v2,v3,sum1,sum2,sum3;
  printf("Escriba 3 números\n");
  scanf("%d %d %d", &v1,&v2,&v3);
  sum1=v1+v2;
  sum2=v2+v3;
  sum3=v3+v1;
  if ((sum1==v3)|(sum2==v3)|(sum3==v3)) {
    printf("Iguales");
  } else {
    printf("Diferentes");
  }
  return 0;
}
