/*El programa de sistematización de datos desea saber qué porcentaje de niños y qué
porcentaje de niñas hay en el curso de introducción a algoritmo. Además, de cada
porcentaje de niñas o niños se desea saber cuántos usan gafas.*/
#include <stdio.h>
void ingresovalues();
int porcentajes();
void resultados();
int mas,fem,masgaf,femgaf,totalgaf;
float masper, femper, masgafper, femgafper;


int main(int argc, char const *argv[]) {
ingresovalues();
porcentajes();
resultados();
return 0;
}

void ingresovalues() {
  printf("Ingrese el número de hombres inscritos\n");
  scanf("%d", &mas);
  printf("Ingrese el número de mujeres inscritas\n");
  scanf("%d", &fem);
  printf("Ingrese el número de hombres que usan gafas\n");
  scanf("%d", &masgaf);
  printf("Ingrese el número de mujeres que usan gafas\n");
  scanf("%d", &femgaf);
  return;
}


int porcentajes(){
  masper=(mas*100.0)/(mas+fem);
  femper=(fem*100.0)/(mas+fem);
  masgafper=(masgaf*100.0)/(mas);
  femgafper=(femgaf*100.0)/(fem);
  totalgaf=masgaf+femgaf;
  return 0;
}

void resultados() {
  if ((femgaf>fem)|(masgaf>mas)) {
    printf("Hay incongruencias en sus datos.\n");
  } else {
    printf("El porcentaje de hombres en la clase es de %f.\n", masper);
    printf("El porcentaje de mujeres en la clase es de %f.\n", femper);
    printf("El porcentaje de hombres que usan gafas es %f.\n", masgafper);
    printf("El porcentaje de mujeres que usan gafas es %f.\n", femgafper);

  }
  return;
}
