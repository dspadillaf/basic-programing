/*El programa de sistematización de datos desea saber qué porcentaje de niños y qué
porcentaje de niñas hay en el curso de introducción a algoritmo. Además, de cada
porcentaje de niñas o niños se desea saber cuántos usan gafas.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {

int mas,fem,masgaf,femgaf,totalgaf;
float masper, femper;
printf("Ingrese el número de hombres inscritos\n");
scanf("%d", &mas);
printf("Ingrese el número de mujeres inscritas\n");
scanf("%d", &fem);
printf("Ingrese el número de hombres que usan gafas\n");
scanf("%d", &masgaf);
printf("Ingrese el número de mujeres que usan gafas\n");
scanf("%d", &femgaf);

masper=(mas*100.0)/(mas+fem);
femper=(fem*100.0)/(mas+fem);
totalgaf=masgaf+femgaf;
if ((femgaf>fem)|(masgaf>mas)) {
  printf("Hay incongruencias en sus datos.\n");
} else {
  printf("El porcentaje de hombres en la clase es de %f.\n", masper);
  printf("El porcentaje de mujeres en la clase es de %f.\n", femper);
  printf("El número de personas que usan gafas son %d\n", totalgaf);

}

return 0;
}
