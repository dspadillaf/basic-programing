/*Cuatro personas están interesadas en saber cuál es la secuencia de alturas desde el más
alto al más bajo entre ellos. Realice un algoritmo que permita saber los niveles de altura
desde el más alto al más pequeño entre las personas.*/
#include <stdio.h>
int main(void) {
  int a1,a2,a3,a4;
  printf("Ingrese la altura de la primera persona 1 en cm\n");
  scanf("%d",&a1);
  printf("Ingrese la altura de la primera persona 2 en cm\n");
  scanf("%d",&a2);
  printf("Ingrese la altura de la primera persona 3 en cm\n");
  scanf("%d",&a3);
  printf("Ingrese la altura de la primera persona 4 en cm\n");
  scanf("%d",&a4);

//a1 el mayor

if (a1>a2) {
  if (a2>a3) {
    if (a3>a4) {
      printf("El orden de mayor a menor es 1,2,3,4");
    } else {
      printf("El orden de mayor a menor es 1,2,4,3");
    }
  } else {
    if (a3>a4) {
      if (a4>a2) {
        printf("El orden de mayor a menor es 1,3,4,2");
      } else {
        printf("El orden de mayor a menor es 1,3,2,4");
      }
    } else {
      if (a3>a2) {
        printf("El orden de mayor a menor es 1,4,3,2");
      } else {
        printf("El orden de mayor a menor es 1,4,2,3");
      }
    }
  }
  //a2 el mayor
} else if (a2>a3) {
  if (a1>a3) {
    if (a3>a4) {
      printf("El orden de mayor a menor es 2,1,3,4");
    } else {
      printf("El orden de mayor a menor es 2,1,4,3");
    }
  } else {
    if (a3>a4) {
      if (a4>a1) {
        printf("El orden de mayor a menor es 2,3,4,1");
      } else {
        printf("El orden de mayor a menor es 2,3,1,4");
      }
    } else {
      if (a3>a1) {
        printf("El orden de mayor a menor es 2,4,3,1");
      } else {
        printf("El orden de mayor a menor es 2,4,1,3");
      }
    }
  }
  //a3 el mayor
} else if (a3>a4) {
  if (a1>a3) {
    if (a3>a4) {
      printf("El orden de mayor a menor es 3,1,2,4");
    } else {
      printf("El orden de mayor a menor es 3,1,4,2");
    }
  } else {
    if (a2>a4) {
      if (a1>a4) {
        printf("El orden de mayor a menor es 3,2,1,4");
      } else {
        printf("El orden de mayor a menor es 3,2,4,1");
      }
    } else {
      if (a2>a1) {
        printf("El orden de mayor a menor es 3,4,2,1");
      } else {
        printf("El orden de mayor a menor es 3,4,1,2");
      }
    }
  }
  //a4 el mayor
}  else if (a4>a1) {
    if (a1>a3) {
      if (a2>a3) {
        printf("El orden de mayor a menor es 4,1,2,3");
      } else {
        printf("El orden de mayor a menor es 4,1,3,2");
      }
    } else {
      if (a2>a3) {
        if (a3>a1) {
          printf("El orden de mayor a menor es 4,2,3,1");
        } else {
          printf("El orden de mayor a menor es 4,2,1,3");
        }
      } else {
        if (a1>a2) {
          printf("El orden de mayor a menor es 4,3,1,2");
        } else {
          printf("El orden de mayor a menor es 4,3,2,1");
        }
      }
    }
  }
  return 0;
}
