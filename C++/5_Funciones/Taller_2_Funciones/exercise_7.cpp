/*Una persona desea iniciar un negocio, para lo cual piensa verificar cuánto dinero le
prestara el banco por hipotecar su casa. Tiene una cuenta bancaria, pero no quiere
disponer de ella a menos que el monto por hipotecar su casa sea muy pequeño. Si el
monto de la hipoteca es menor que $1,000 000 entonces invertirá el 50% de la inversión
total y un socio invertirá el otro 50%. Si el monto de la hipoteca es de $ 1,000 000 o más,
entonces invertirá el monto total de la hipoteca y el resto del dinero que se necesite para
cubrir la inversión total se repartirá a partes iguales entre el socio y el.*/
#include <stdio.h>
int hipo, pago1, pago2, negoci;
void ingresovalues();void operaciones();

int main(int argc, char const *argv[]) {
  ingresovalues();
  operaciones();
  return 0;
}

void ingresovalues() {
  printf("Ingrese el valor que le asignan de hipoteca\n");
  scanf("%d", &hipo);
  printf("Ingrese el valor del negocio\n");
  scanf("%d", &negoci);
  return;
}


void operaciones() {
  if (hipo<1000000&&hipo>0) {
    pago1=(negoci/2);
    pago2=(negoci/2);
    printf("La persona debe pagar %d, que es el 50%% del valor del negocio.\n", pago1);
    printf("El socio de la persona debe pagar %d, que es el 50%% del valor del negocio.\n", pago2);
  } else {
    int a;
    a = negoci-hipo;
    if (a<0) {
      printf("La persona pagara el total del negocio porque la hipoteca cubre el 100% del valor\n");
    } else {
      pago1=(hipo)+((negoci-hipo)/2);
      pago2=((negoci-hipo)/2);
      printf("La persona debe pagar %d, que es la hipoteca más el 50%% del restante al valor de la hipoteca.\n", pago1);
      printf("El socio de la persona debe pagar %d, que es el 50%% del restante al valor de la hipoteca.\n", pago2);
    }
  }
  return;
}
