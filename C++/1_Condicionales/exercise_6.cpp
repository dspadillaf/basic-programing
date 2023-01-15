/*Realizar un algoritmo que digitados 5 números por teclado determine cuantos son
mayores a la media. (promedio)*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int v1,v2,v3,v4,v5,media;
  printf("Ingrese el valor 1\n");
  scanf("%d", &v1);
  printf("Ingrese el valor 2\n");
  scanf("%d", &v2);
  printf("Ingrese el valor 3\n");
  scanf("%d", &v3);
  printf("Ingrese el valor 4\n");
  scanf("%d", &v4);
  printf("Ingrese el valor 5\n");
  scanf("%d", &v5);

media=(v1+v2+v3+v4+v5)/5;

if (v1>media) {
  printf("El valor 1 (%d) está por encima de la media (%d).\n", v1,media);
}
if (v2>media) {
  printf("El valor 2 (%d) está por encima de la media (%d).\n", v2,media);
}
if (v3>media) {
  printf("El valor 3 (%d) está por encima de la media (%d).\n", v3,media);
}
if (v4>media) {
  printf("El valor 4 (%d) está por encima de la media (%d).\n", v4,media);
}
if (v5>media) {
  printf("El valor 5 (%d) está por encima de la media (%d).\n", v5,media);
}

  return 0;
}
