/*Diseñe un algoritmo que lea un número entero de 3 cifras, y forme el mayor número
posible con las cifras del número ingresado. El número formado debe tener el mismo signo
que el número ingresado.*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
int num1, num2, numaux, uni, dec, cen, menor, mayor,medio;

printf("Ingrese el número de 3 cifras\n");
    scanf("%d", &num1);


    if (( num1 >= 100 && num1 <= 999 ) || ( num1 >= -999 && num1 <= -100 )) {

        // Guarda el número en una variable auxiliar para preservar el signo
        numaux = num1;

        // Cambia el signo de num1 en caso de ser negativo
        if (( num1 < 0 )) {
        num1 = -num1;
        }

        // Determina las cifras del número
        cen = num1/100;
        dec = (num1%100)/10;
        uni = (num1%100)%10;

        // Determina la cifra menor
        menor = cen;
        if ( dec < menor ) {
          menor = dec;
        }

      if ( uni < menor ) {
        menor = uni;
      }

        // Determina la cifra mayor
        mayor = cen;
        if (dec > mayor) {
          mayor = dec;
        }

        if (uni > mayor ) {
          mayor = uni;
        }

        // Determina la cifra del medio
        medio = cen+dec+uni-mayor-menor;
        // Forma el nuevo número
        if (numaux > 0 ) {
          num2 = mayor*100 + medio*10 + menor;
        }else{
          num2 = -1*(menor*100 + medio*10 + mayor);
        }

        // Imprime el nuevo número
        printf("El mayor número posible es %d.\n", num2);
    } else {
      printf("El número no tiene tres cifras\n"); 
    }



        return 0;
      }
