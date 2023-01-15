/*Diseñe un algoritmo que determine quienes son contemporáneos entre Juan, Mario y
Pedro.*/
#include <stdio.h>
#include <cmath>

int main(int argc, char const *argv[]) {
  int ej,em,ep,djm,dmp,djp;
  printf("Ingrese la edad de Juan\n");
  scanf("%d", &ej);
  printf("Ingrese la edad de Mario\n");
  scanf("%d", &em);
  printf("Ingrese la edad de Pedro\n");
  scanf("%d", &ep);

djm=abs(ej-em);
dmp=abs(em-ep);
djp=abs(ej-ep);

  if (djm<=3) {
    printf("Julian y Mario son contemporáneos porque se llevan: %d año/s. (De 0 a 3 años)\n", djm);
  } else{
    printf("Julian y Mario no son contemporáneos porque se llevan: %d año/s.(Más de 3 años)\n", djm);
  }
  if (dmp<=3) {
    printf("Mario y Pedro son contemporáneos porque se llevan: %d año/s.(De 0 a 3 años)\n", dmp);
  } else{
    printf("Mario y Pedro no son contemporáneos porque se llevan: %d año/s.(Más de 3 años)\n", dmp);
  }
  if (djp<=3) {
    printf("Julian y Pedro son contemporáneos porque se llevan: %d año/s.(De 0 a 3 años)\n", djp);
  } else{
    printf("Julian y Pedro no son contemporáneos porque se llevan: %d año/s.(Más de 3 años)\n", djp);
  }
  return 0;
}
