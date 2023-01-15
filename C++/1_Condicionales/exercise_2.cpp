/*Realizar un algoritmo que calcule la media de 6 números positivos introducidos por
teclado, suponiendo que los datos se leen desde la terminal.*/
#include <stdio.h>
int main(void) {
  int v1,v2,v3,v4,v5,v6;

  printf("Ingrese 6 numeros positivos\n");
  scanf("%d %d %d %d %d %d",&v1,&v2,&v3,&v4,&v5,&v6);
if ((v1<0)|(v2<0)|(v3<0)|(v4<0)|(v5<0)|(v6<0)) {
  printf("Alguno de sus numeros es negativo\n");
} else {
  double media;
  media=(v1+v2+v3+v4+v5+v6)/6.0;
  printf("La media de los seis numeros es %f \n", media);
}
  return 0;
}
