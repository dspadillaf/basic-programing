/*Realizar un algoritmo que les por teclado 3 números y que los visualice por la pantalla del
menor al mayor*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int v1,v2,v3;
  printf("Ingrese el primer número\n");
  scanf("%d", &v1);
  printf("Ingrese el segundo número\n");
  scanf("%d", &v2);
  printf("Ingrese el tercer número\n");
  scanf("%d", &v3);
  if (v1>v2&&v2>v3&&v1>v2) {
    printf("El ordén de los números es %d, %d, %d.\n", v1,v2,v3);
  } else {
    if (v1>v2&&v3>v2&&v1>v3) {
      printf("El orden de los numeros es %d, %d, %d.\n", v1,v3,v2);
    } else {
      if (v2>v1&&v1>v3&&v2>v3) {
        printf("El orden de los numeros es %d, %d, %d.\n", v2,v1,v3);
      } else {
        if (v2>v1&&v3>v1&&v2>v3) {
          printf("El orden de los numeros es %d, %d, %d.\n", v2,v3,v1);
        } else {
          if (v3>v1&&v1>v2&&v3>v2) {
            printf("El orden de los numeros es %d, %d, %d.\n", v3,v1,v2);
          } else {
            if (v3>v1&&v2>v1&&v3>v2) {
              printf("El orden de los numeros es %d, %d, %d.\n", v3,v2,v1);
            } else {
              printf("No se registra números enteros validos\n");
            }
          }
        }
      }
    }
  }
  return 0;
}
