/*El promedio de prácticas de un curso se calcula en base a cuatro prácticas calificadas de
las cuales se elimina la nota menor y se promedian las tres notas más altas. Diseñe un
algoritmo que determine la nota eliminada y el promedio de prácticas de dos estudiantes.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int na1,na2,na3,na4,nb1,nb2,nb3,nb4,ea,eb;
  float proa, prob, procur;

  printf("Ingrese la nota 1 del estudiante 1\n");
  scanf("%d", &na1);
  printf("Ingrese la nota 2 del estudiante 1\n");
  scanf("%d", &na2);
  printf("Ingrese la nota 3 del estudiante 1\n");
  scanf("%d", &na3);
  printf("Ingrese la nota 4 del estudiante 1\n");
  scanf("%d", &na4);
  printf("Ingrese la nota 1 del estudiante 2\n");
  scanf("%d", &nb1);
  printf("Ingrese la nota 2 del estudiante 2\n");
  scanf("%d", &nb2);
  printf("Ingrese la nota 3 del estudiante 2\n");
  scanf("%d", &nb3);
  printf("Ingrese la nota 4 del estudiante 2\n");
  scanf("%d", &nb4);


  if (na4<na1&&na4<na2&&na4<na3) {
    proa=((na1+na2+na3))/3.0;
    ea=4;
  }else{
    if (na3<na1&&na3<na2&&na3<na4) {
      proa=((na1+na2+na4))/3.0;
      ea=3;
    }else {
      if (na2<na1&&na2<na4&&na2<na3) {
        proa=((na1+na4+na3))/3.0;
        ea=2;
      } else {
        if (na1<na4&&na1<na2&&na1<na3) {
          proa=((na4+na2+na3))/3.0;
          ea=1;
        } else {
          proa=((na1+na2+na3+na4))/4.0;
          ea=0;
        }
      }
    }
  }

  if (nb4<nb1&&nb4<nb2&&nb4<nb3) {
    prob=((nb1+nb2+nb3))/3.0;
    eb=4;
  }else{
    if (nb3<nb1&&nb3<nb2&&nb3<nb4) {
      prob=((nb1+nb2+nb4))/3.0;
      eb=3;
    }else {
      if (nb2<nb1&&nb2<nb4&&nb2<nb3) {
        prob=((nb1+nb4+nb3))/3.0;
        eb=2;
      } else {
        if (nb1<nb4&&nb1<nb2&&nb1<nb3) {
          prob=((nb4+nb2+nb3))/3.0;
          eb=1;
        } else {
          prob=((nb1+nb2+nb3+nb4))/4.0;
          ea=0;
        }
      }
    }
  }

  procur=(proa+prob)/2.0;
if (ea>=1&&ea<=4) {
  printf("El promedio del estudiante 1 es de %f, y se le eliminó la nota %d\n", proa,ea);

}else{
  printf("El promedio del estudiante 1 es de %f, y no hubo necesidad de quitar alguna nota\n", proa);
}
if (eb>=1&&eb<=4) {
    printf("El promedio del estudiante 2 es de %f, y se le eliminó la nota %d\n", prob,eb);
}else{
    printf("El promedio del estudiante 2 es de %f, y no hubo necesidad de quitar alguna nota\n", prob);
  }

  printf("El promedio del curso es %f.\n", procur);
    return 0;
  }
