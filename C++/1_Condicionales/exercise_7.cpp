/*Realizar un algoritmo que pida un número de 1 al 10 y que diga si el número es primo o no*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
int num;
  printf("Digite un número de 1 a 10.\n");
  scanf("%d", &num);

  if (num>=1&&num<=10) {
    if ((num==2)|(num==3)|(num==5)|(num==7)) {
      printf("El número digitado es primo\n");
    } else {
      printf("El número digitado no es primo\n");
    }
  } else {
    printf("El numero digitado no está entre 1 y 10\n");
  }
  return 0;
}
