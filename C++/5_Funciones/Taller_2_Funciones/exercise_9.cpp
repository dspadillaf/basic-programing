/*Una persona se encuentra con un problema de comprar un automóvil o un terreno, los
cuales cuestan exactamente lo mismo. Sabe que mientras el automóvil se devalúa, con el
terreno sucede lo contrario. Esta persona comprara el automóvil si al cabo de tres años la
devaluación de este no es mayor que la mitad del incremento del valor del terreno.
Ayúdale a esta persona a determinar si debe o no comprar el automóvil.*/
#include <stdio.h>
#include <stdlib.h> //permite los comandos exit abort
  int precio,incr,decr;
  void ingresovalues();void verificador();void operaciones(); void results();

int main(int argc, char const *argv[]) {
  ingresovalues();
  verificador();
  operaciones();
  results();
  return 0;
}

void ingresovalues(/* arguments */) {
  printf("Ingrese el valor del terreno y del automóvil\n");
  scanf("%d", &precio);

  printf("Ingrese el incremento anual del terreno\n");
  scanf("%d", &incr);

  printf("Ingrese el decremento anual del automovil\n");
  scanf("%d", &decr);
  return;
}

void verificador() {
  if ((incr<0|incr>100)|(decr<0|decr>100)) {
    printf("Ingrese un valor valido en el Incremento y el decremento\n");
  ingresovalues();
  }
  return;
}

void operaciones() {
  incr = (((precio * incr) / 100) * 3) / 2;
  decr = ((precio * decr) / 100) * 3;
  return;
}

void results() {
  printf("La mitad del incremento es de: %d. En 3 años.\n", incr);
  printf("La devaluación del automovil es de %d. En 3 años.\n", decr);
  if (decr<incr) {
    printf("En estas condiciones es mejor comprar el carro.\n");
  } else{
    printf("En estas condiciones es mejor comprar el terreno.\n");
  }
  return;
}
