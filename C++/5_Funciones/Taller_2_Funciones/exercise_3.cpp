/*Leer tres números que denoten una fecha (día, mes, año). Comprobar que es una fecha
válida. Si no es válida escribir un mensaje de error. Si es válida escribir la fecha cambiando
el número del mes por su nombre. Ej. si se introduce 1 2 2006, se deberá imprimir “1 de
febrero de 2006”. El año debe ser mayor que 0. (Recuerda la estructura según sea).*/
#include <stdio.h>
#include <string> //permite el uso de string
#include <iostream>//permite usar el cout para escribir y pueda leer el string
using namespace std; //permite el uso de string sin necesidad de poner std::string, si no se usa debe declararse así std::

int dia,mes,ano;
string mesescrito;
void ingresovalues();
void operaciones();
int main(int argc, char const *argv[]) {
  ingresovalues();
  operaciones();
  return 0;
}


void ingresovalues() {
  printf("Ingrese el día del mes en números\n");
  scanf("%d", &dia);
  printf("Ingrese el mes en números\n");
  scanf("%d", &mes);
  printf("Ingrese el año en números\n");
  scanf("%d", &ano);
  return;
}

void operaciones() {
  if ((dia>31)|(dia<1)|(mes>12)|(mes<1)|(ano>3000)|(ano<1)) {
    printf("Su fecha no corresponde a la realidad: Maximos dias 31, Maximos meses es 12 y máximos años son 3000. Y todos mayor a 0.\n");
  } else {
    if (mes==1) {
    mesescrito="Enero";
    } else {
      if (mes==2) {
        mesescrito="febrero";
      } else {
        if (mes==3) {
          mesescrito="marzo";
        } else {
          if (mes==4) {
            mesescrito="abril";
          } else {
            if (mes==5) {
              mesescrito="Mayo";
            } else {
              if (mes==6) {
                mesescrito="Junio";
              } else {
                if (mes==7) {
                  mesescrito="Julio";
                } else {
                  if (mes==8) {
                    mesescrito="Agosto";
                  } else {
                  if (mes==9) {
                    mesescrito="Septiembre";
                  } else {
                    if (mes==10) {
                      mesescrito="Octubre";
                    } else {
                      if (mes==11) {
                        mesescrito="Noviembre";
                      } else {
                        if (mes==12) {
                          mesescrito="Diciembre";
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
      cout << dia << " de " << mesescrito << " del " << ano <<".\n";
  }
  return;
}
