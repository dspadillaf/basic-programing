/*En un café la hora de internet es 1.350 pesos, se desea saber si tres miembro de una
familia van a utilizarlo durante varias horas en la mañana cuanto tiene que pagar si ellos
salieron del café en intervalos de 30 minutos.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int v1,v12, v2,v22,v3,v32,valorhor;
  float valormin;
  valorhor=1350;
  valormin=22.5;
  int prc1, prc2, prc3;

  printf("Digite el numero de horas que estuvo conectado la persona 1.\n");
  scanf("%d", &v1);
  printf("Digite el numero de minutos que estuvo conectado la persona 1.\n");
  scanf("%d", &v12);
  printf("Digite el numero de horas que estuvo conectado la persona 2.\n");
  scanf("%d", &v2);
  printf("Digite el numero de minutos que estuvo conectado la persona 2.\n");
  scanf("%d", &v22);
  printf("Digite el numero de horas que estuvo conectado la persona 3.\n");
  scanf("%d", &v3);
  printf("Digite el numero de minutos que estuvo conectado la persona 3.\n");
  scanf("%d", &v32);

  if (v12>59|v22>59|v32>59) {
    printf("Marcó un valor de tiempo no valido, maximo deben ser 59 minutos. Y no deben ser valores menores a 0\n");
  } else{
    prc1 =(valorhor*v1)+(valormin*v12);
    prc2 =(valorhor*v2)+(valormin*v22);
    prc3 =(valorhor*v3)+(valormin*v32);
    printf("El valor a pagar por la persona 1 es: %d\n", prc1);
    printf("El valor a pagar por la persona 2 es: %d\n", prc2);
    printf("El valor a pagar por la persona 3 es: %d\n", prc3);
  }




  return 0;
}
