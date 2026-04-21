/*programa que convierte de mayuscula a minuscula
o de minuscula a mayuscula, los caracteres de una cadena
Lo impleta con un puntero. */
#include <stdio.h>

#include <stdlib.h>
#include <string.h>

void main()
{
	char *p;
	char cadenaTexto[81];
	printf("Introduzca una cadena ");
	//scanf("%s",cadenaTexto);//hasta que encuentra un espacio en blanco

	gets(cadenaTexto);//Finaliza con un Enter, 
	//lee hasta que encuentra línea nueva y agrega al final \0

	p = &cadenaTexto[0]; // equivale a p = cadenaTexto
	
	printf("Introdujo -> %s\r\n",cadenaTexto);
	printf("Longitud -> %d\r\n\r\n",strlen(cadenaTexto));
	for(p;*p;p++)//mientras no sea '\0'
	{//restar 32 constantes de ASCII
		if((*p>='a') && (*p<='z'))
			*p-= 32;//Convierte a mayusculas
		else
			if((*p>='A') && (*p<='Z'))
				*p+= 32;//Convierte a minúsculas

	}
	printf("\r\nLa cadena convertida ->  %s\r\n", cadenaTexto);
	getchar();
}