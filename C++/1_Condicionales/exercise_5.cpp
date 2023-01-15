/*Un corredor de maratón (distancia=42.195km) ha recorrido la carrera en 2 horas 25
minutos. Se desea calcular un algoritmo que calcule el tiempo medio en minutos por
kilómetros*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  float maraton=0, tiempo=0, medio=0;

printf("Ingrese la distancia total en kilometros (42.195)\n");
scanf("%f", &maraton);
printf("Ingrese el tiempo total en minutos usado para el recorrido (145.0)\n");
scanf("%f", &tiempo);
  medio=(maraton/tiempo);
printf("El tiempo medio por kilometro (km/m) es de %f\n", medio);
  return 0;
}
