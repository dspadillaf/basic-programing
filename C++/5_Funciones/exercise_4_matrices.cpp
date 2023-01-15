/*Implementar un programa que me pregunte la dimensión de un a matriz y la opción a escoger: 1.-
todos 1, 2.- todos 0 3.- todos las diagonales(principal y secundaria) 1) y me imprima la matriz
seleccionada*/
#include <stdio.h>
  int tam;
  int option;
  void ingresovalues();void menu(); void opcion1();void opcion2();void opcion3();

  int main(int argc, char const *argv[]) {
    ingresovalues();
    menu();
  return 0;
}

void ingresovalues() {
  printf("Por favor digite el tamaño de filas de la matriz\n");
 scanf("%d",&tam);

}

void menu() {
  printf("Seleccione una opción: 1) Todos 1, 2) Todos 0, 3) Matriz principales y secundaria con 1. \n");
  scanf("%d", &option);
  switch (option) {
    case 1:
    opcion1();
    break;
    case 2:
    opcion2();
    break;
    case 3:
    opcion3();
    break;
    default:
    printf("Seleccione una opción valida\n");
    menu();
  }
}


    ///////MATRIZ A

void opcion1() {
  int Ma[tam][tam];
  for(int i =0;i<tam;i++)
  {
    for(int j=0;j<tam;j++)
    {
    Ma[i][j]=1;
    }


  for(int i =0;i<tam;i++)
  {
    for(int j=0;j<tam;j++)
    {
    printf("\t%d",Ma[i][j]);
    }
    printf("\n");
  }
}
return;
}

void opcion2() {
  int Ma[tam][tam];
  for(int i =0;i<tam;i++)
  {
    for(int j=0;j<tam;j++)
    {
    Ma[i][j]=0;
    }
  }

  for(int i =0;i<tam;i++)
  {
    for(int j=0;j<tam;j++)
    {
    printf("\t%d",Ma[i][j]);
    }
    printf("\n");
  }
  return;
}

void opcion3() {
  int Ma[tam][tam];
  int a =0;
  if (option==3) {
    for(int i =0;i<tam;i++)
    {
      a++;
      for(int j=0;j<tam;j++)
      {
        if ((j==i)|(j==(tam-a))) {
          Ma[i][j]=1;
        } else {
          Ma[i][j]=0;
        }
              }
    }

    for(int i =0;i<tam;i++)
    {
      for(int j=0;j<tam;j++)
      {
      printf("\t%d",Ma[i][j]);
      }
      printf("\n");
    }
}
return;
}
