/*EJEMPLO 7. CAST's*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
  int numero;
  int Linf=10, Lsup=100, Divisor=100, i;
  double ParteEntera, ParteDecimal, xRand;

  
  
    
  //USO DE LA FUNCION rand()
  srand (time(NULL)); //para generar distintos nros. aleatorios en cada ejecucion
  
  printf( "\r\n10 numeros generados aleatoriamente entre 0 y Rand_MAX: %d\n\n",RAND_MAX  );
  
  for( i=1; i<=10; i++ ){
  	printf( "\r\n%d ", rand() );
  	getchar();
  }
  
  //resto de la division entera -> operador '%'
  numero = rand() % 11 + 20 ;//Este está entre 20 y 30
  printf( "\r\nNumero entre 10 y 30: %d\n\n",numero);
  //numero = rand () % (N-M+1) + M; Este está entre M y N
  printf("\r\n\r\nUSO DE LA FUNCION rand() para generar numeros decimales: \r\n\r\n");
  numero = rand() % (Lsup-Linf+1) + Linf;
  ParteEntera    = (double)(numero);
  printf( "\r\nParte entera entre %d y %d: %d\n\n",Linf, Lsup, numero);
  numero = rand() % (Divisor+1);
  printf( "\r\nParte decimal entre 0 y %d: %d\n\n",Divisor, numero);
  ParteDecimal = (double)(numero)/ (double) Divisor;
  xRand = ParteDecimal+ParteEntera;
  printf("Numero aleatorio decimal %5.2f\r\n", xRand);
  getchar();
}

