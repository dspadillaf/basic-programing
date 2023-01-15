/*Cargue un vector de 100 elementos. Determine cuál es el valor más pequeño del
vector. Además, determine si existe algún elemento repetido en el vector; de ser
cierto, indique cuantas veces se repite. Imprima el elemento más pequeño del
vector, el elemento que se repite y la cantidad de veces que se repite.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int aleatorio[100]; //100 numeros
    int i, j, aux;
    int repetido=0, repeticiones=0, hayRepeticiones;
    srand(time(NULL));

    for (i=0; i<=100; i++) {
        aleatorio[i] = rand()%20+1;
    }
//ORDENARLO

    for(i=0; i<99;i++)
    {
      for(j=i+1;j<=(99-1);j++)
      {
        if (aleatorio[j] < aleatorio[i])
        {
          aux=aleatorio[i];
          aleatorio[i]=aleatorio[j];
          aleatorio[j]=aux;
    }
    }
  }



//Comprobar repeticiones
        for (i=0; i<=99; i++) {
            for (j=i+1; j<=99; j++) {
                if (aleatorio[i] == aleatorio[j]) { //Repetición
                  if (repetido!=aleatorio[j]){

                    repetido=repetido+1;
                    repeticiones=0;
                    }else{
                    repeticiones=repeticiones+1;
                }
printf("El numero %d se repite %d veces en el vector\n", repetido,repeticiones);
              }
            }
        }


    for (i=0; i<=99; i++) {
        printf("Aleatorio %d vale: %d\n", i, aleatorio[i]);
    }


    return 0;

}
