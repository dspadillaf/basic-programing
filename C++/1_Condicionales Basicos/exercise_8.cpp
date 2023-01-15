/*El gobierno desea saber el número de pinos, guayacanes y cedros que tendrá que sembrar
en el bosque, si se sabe que en 10 metros cuadrados caben 8 pinos, en 15 metros
cuadrados caben 15 oyameles y en 18 metros cuadrados caben 10 cedros. También se
sabe que una hectárea equivale a 10 mil metros cuadrados.*/
#include <stdio.h>
#include <stdlib.h> //permite los comandos exit abort
int main(int argc, char const *argv[]) {
  int pin, gua, ced;
  int hecpin, hecgua, hecced;
  int m2pin, m2gua, m2ced;
  //10m2 8 pin
  //15m2 15 gua
  //18m2 10 ced
printf("Ingrese el número de hectárea que destinará para pinos\n");
scanf("%d", &hecpin);
printf("Ingrese el número de hectárea que destinará para pinos\n");
scanf("%d", &hecgua);
printf("Ingrese el número de hectárea que destinará para pinos\n");
scanf("%d", &hecced);

if ((hecpin<0)|(hecgua<0)|(hecced<0)){
  printf("Asigne valores de hectareas valido\n");
  abort();
}
m2pin=hecpin*10000;
m2gua=hecgua*10000;
m2ced=hecced*10000;

pin=m2pin*8;
gua=m2gua*15;
ced=m2ced*10;

printf("Usted podrá sembrar %d pinos en sus %d hectaras\n", pin,hecpin);
printf("Usted podrá sembrar %d cedros en sus %d hectaras\n", ced,hecced);
printf("Usted podrá sembrar %d guayacanes en sus %d hectaras\n", gua,hecgua);

  return 0;
}
