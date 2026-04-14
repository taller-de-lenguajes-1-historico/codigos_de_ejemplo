/*EJEMPLO 3. ARREGLOS y PUNTEROS*/

#include <stdio.h>
#include <stdlib.h>

const int DIM = 10;
// -----------------------------------------------------------

int main()
{
  int  Buff[DIM], i;
  int  *pBuff;
  
 

  pBuff= Buff; //=&Buff[0];

  // --- PRIMERA FORMA DE RECORRER UN ARREGLO ---------
  printf("\r\nPRIMERA FORMA DE RECORRER UN ARREGLO. Puntero Auxiliar pBuff\r\n\r\n"); 
  for(i=0;i<DIM;i++)
	{
    *(pBuff+i)=10+ rand() % (41);//asigna e incrementa el puntero
    printf("%4d",*(pBuff+i));//lo muestra
    //printf("%4d",*(pBuff+i)=10+random(41));//en una sola sentencia
  }
  
  printf("\r\n\r\n");getchar();
  
  // --- SEGUNDA FORMA DE RECORRER UN ARREGLO ---------
  printf("\r\nSEGUNDA FORMA DE RECORRER UN ARREGLO. SUBINDEXADA Buff[i]\r\n\r\n");
  for(i=0;i<DIM;i++) 
      printf("%4d",Buff[i]);
  
  printf("\r\n\r\n");getchar();
  
  // --- TERCERA FORMA DE RECORRER UN ARREGLO ---------
  printf("TERCERA FORMA DE RECORRER UN ARREGLO. INDEXADA *(Buff+i)\r\n\r\n");
  for(i=0;i<DIM;i++)
      printf("%4d", *(Buff+i));

  printf("\r\n\r\n");getchar();
  return 0;
}

