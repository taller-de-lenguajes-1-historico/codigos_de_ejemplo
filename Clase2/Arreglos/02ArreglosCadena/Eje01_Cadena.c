/* 	INICIALIZACION DE CADENAS 	  	*/
/***********************************/

#include <stdio.h>

main()
{   
	
	char cadena1[]={'U','n','a',' ','c','o',
		      'n','s','t','a', 'n','t','e',' ',
			'd','e',' ','c','a','d','e','n','a','\0'};
	
	char cadena2[]="Otra constante de cadena";
	char *ptr_ch = &cadena2[0];
	int i;

	//Imprimir una cadena usando especificador de formato %s 
	printf("\n\tIMPRESION DE CONSTANTES DE CADENA\n\n");
	printf("\n\t____________________________________\n\n");
	printf("\tLa cadena de caracteres 1 ==> %s\n\n",cadena1);
	printf("\t\tEl tamanio de la cadena 1 es %d by\n\n",sizeof(cadena1));
	printf("\tLa cadena de caracteres 2 ==> %s\n\n",cadena2);
	printf("\t\tEl tamanio de la cadena 2 es %d by\n\n",sizeof(cadena2));
	printf("\n\tIMPRIME LA PRIMERA CADENA CON FOR\n");
	printf("\n\t____________________________________\n\n\t");

	for(i=0;cadena1[i];i++)
		printf("%2c",cadena1[i]);
	printf("\n");
	printf("\n\tIMPRIME LA SEGUNDA CADENA CON FOR\n");
	printf("\n\t____________________________________\n\n\t");

	for(i=0;cadena2[i];i++)
		printf("%c",cadena2[i]);
	printf("\n");

	//Asigna una cadena a un apuntador
	ptr_ch="Asigna una cadena a un apuntador";
	printf("\n\tIMPRIME LA CADENA APUNTADA POR UN PUNTERO\n");
	printf("\n\t_________________________________________\n\n\t");

	for(ptr_ch;*ptr_ch;ptr_ch++)
		printf("%2c",*ptr_ch);
	printf("\n");
	
	getchar();
	return 0;

}