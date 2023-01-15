/*Diseñe un algoritmo que lea tres longitudes y determine si forman o no un triángulo. Si es
un triángulo determine de que tipo de triángulo se trata entre: equilátero (si tiene tres
lados iguales), isósceles (si tiene dos lados iguales) o escaleno (si tiene tres lados
desiguales). Considere que para formar un triángulo se requiere que: &quot;el lado mayor sea
menor que la suma de los otros dos lados&quot;.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int l1,l2,l3;
  int vtria;
printf("Ingrese la primera longitud\n");
scanf("%d", &l1);
printf("Ingrese la segunda longitud\n");
scanf("%d", &l2);
printf("Ingrese la tercera longitud\n");
scanf("%d", &l3);

  if (l1>(l2+l3)) {
    vtria=1;
  } else {
  if (l2>(l1+l3)) {
    vtria=1;
  } else {
    if (l3>(l1+l2)) {
      vtria=1;
    } else {
      if (l3==l1&&l2==l1) {
        vtria=1;
      } else {
        vtria=0;
      }
    }
  }
  }
if (vtria==1) {
  if (l1==l2&&l2==l3) {
    printf("Si es un triangulo y es equilatero.\n");
  } else {
    if ((l1==l2)|(l2==l3)|(l3==l1)) {
      printf("Si es un triangulo y es isóceles.\n");
    } else {
      if ((l1!=l2)&&(l2!=l3)&&(l3!=l1)) {
        printf("Si es un triangulo y es escaleno\n");
      } else {
        printf("Revise los datos ingresados no tienen coherencia\n");
      }
    }
  }
} else {
  printf("No es un triángulo\n");
}
  return 0;
}
