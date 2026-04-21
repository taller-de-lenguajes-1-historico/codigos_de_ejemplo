/* 
   CAST's
   Conversión en asignación  
*/
#include <stdio.h>

int main()
{	int a, b;
 	float c; 
 	a=125; b=65;
 	c=(float)(100/3);
 	
	printf("DIVIDE dos enteros: %d/%d \r\n\r\n",a,b);
	printf("EL RESULTADO SIN CAST -> %f\r\n\r\n",c);
	
	c=(float)a/b;
	
	printf("EL RESULTADO CON CAST: (double)%d/%d -> %f\r\n\r\n",a,b,c);
	printf("EL RESULTADO CON CAST limitado a dos decimales: (double)%d/%d -> %.2f\r\n\r\n",a,b,c);
	getchar();
	
	return 0;
}