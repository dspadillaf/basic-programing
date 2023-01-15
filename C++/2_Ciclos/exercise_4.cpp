/*Realizar un algoritmo que ingrese por teclado 5 números del 1 al 12 y diga el mes que
corresponde digo número.*/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {

int num;
string mes;

int i = 1;
while (i<=5) {

  printf("Digite el número del mes de 1 a 12 (%d de 5)\n", i);
  scanf("%d", &num);

  if (num>=1&&num<=12) {
    if (num==1) {
      mes="Enero";
    } else {
      if (num==2) {
        mes="Febrero";
      } else {
        if (num==3) {
          mes="Marzo";
        } else {
          if (num==4) {
            mes="Abril";
          } else {
            if (num==5) {
              mes="Mayo";
            } else {
              if (num==6) {
                mes="Junio";
              } else {
                if (num==7) {
                  mes="Julio";
                } else {
                  if (num==8) {
                    mes="Agosto";
                  } else {
                    if (num==9) {
                      mes="Septiembre";
                    } else {
                      if (num==10) {
                        mes="Octubre";
                      } else {
                        if (num==11) {
                          mes="Noviembre";
                        } else {
                          if (num==12) {
                            mes="Diciembre";
                          } else {
                            printf("No se reconoce el numero, use numeros enteros\n");
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cout << "El mes digitado es: " << mes <<".\n";
  } else {
    printf("No seleccionó un número valido, debe ser entero entre 1 y 12\n");
  }
  i=i+1;
}

return 0;
}
