#include <stdio.h>

const int
    Filas = 3,
    Columnas = 4;   

int main(void) 
{  
  int  i, j;
  
  // arreglo de 2 dimensiones
  int num[Filas][Columnas] = 
  {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };
  

  // puntero a la posición 0 del arreglo
  int *ptr = &num[0][0];
  
  // imprimiendo los elementos del arreglo con el puntero
  for (i = 0; i < Filas; i++) 
  {
    for (j = 0; j < Columnas; j++) 
    {
      printf("%4d ", *(ptr + i * Columnas + j));
    }
    printf("\n");
  }
  getchar();
  return 0;
}