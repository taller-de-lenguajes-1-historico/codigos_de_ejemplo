/* 	EJERCICIO: CALCULA LA LONGITUD DE UNA CADENA  	*/
/****************************************************/

#include <stdio.h>

#include <string.h>

main()
{   char cadena[80], *pc;
	int i;


	printf("\n\tCALCULA LA LONGITUD DE UNA CADENA");
	printf("\n\t_________________________________\n");
	printf("\n\tIntroduzca una cadena que tenga menos de 80 caracteres:\n\t");
	gets(cadena); // solicita una cadena de hasta 80 caracteres
	i=0;
	while (cadena[i]) 	i++;
	printf("\n\tLa longitud de la cadena ==>%d",i);
	printf("\n\t_________________________________\n\n\t");

	/*Usando aritm�tica de punteros*/
	i=0;
	pc = &cadena[0];//posicion del per. elemento
	while (*pc++)
		i++;
	printf("\n\tUsando aritmetica de punteros con *pc++, longitud ==>%d",i);
	printf("\n\t_______________________________________________________\n\n\t");
	
	i=0;
	for(pc=&cadena[0];*pc;pc++)//aritmetica de puntero
		i++;
	
	printf("\n\tOtra forma con punteros, longitud  ==>%d",i);
	printf("\n\t________________________________________\n\n\t");
	printf("\n\tUsando la funcion strlen ==>%d",strlen(cadena));
	printf("\n\t______________________________\n\n\t");

	getchar();
	return 0;

}