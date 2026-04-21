#include <stdio.h>
#include <conio.h>
#include <string.h>

/* CADENA DE CARACTERES
USO DE LA FUNCION STRCPY() */

int largo_cadena(char *cadena);

main()
{
	
	//al declarar un vector se define la cantidad 
	//de elementos que puede contener, en el caso  
	//de las cadenas se debe tener en cuenta el espacio
	//adicional necesario para el \0

	//para las cadenas de caracteres, podemos utilizar 
	//varias formas de inicialización
	
	//char s[]={'B','u','e','n','o','s',' ','d','i','a','s',' ','S','r.','\0'};
	char s[80]="Buenos dias Sr. Perez";
  	//char s[]="Buenos dias Sr. Perez";
  	char cade[12], t[80], otra[80]="", *pc;
    	
  
	clrscr();
	printf("La cadena s -> %s \r\n",s );
	cprintf("\nCopia la cadena en otra:\r\n");
	strcpy(t,s); 
	cprintf("\r\n");
	cprintf("La nueva cadena t -> %s\r\n",t);
	cprintf("\r\n");
   	strcpy(t+12,"Sr. C"); //modifica la cadena a partir del caracter 13
   	cprintf("La cadena t modificada -> ");  puts(t);
   	cprintf("\r\n"); getch();
   	cprintf("\nCopia una cadena mas larga en otra mas corta:\r\n");
   	cprintf("\nIngrese una cadena de 12 o mas caracteres: ");
   	gets(otra);
	strcpy(cade,otra);cprintf("\r\n\r\n");
	printf("cade = %s \r\n",cade );
	cprintf("\r\n");
	cprintf("Usando punteros:\r\n");
	for(pc=cade;*pc;pc++)
		cprintf("%c ",*pc);
	//También se puede usar while en lugar del for
	//pc=cade;
	//while(*pc) cprintf("%c ",*pc++);
	cprintf("\r\n");
	cprintf("\r\nCaracteres copiados en 'cade' -> %d",largo_cadena(cade));
	cprintf("\r\n\r\n");
	//MUY RAROOOOOO
	cprintf("La cadena s -> %s\r\n",s);//ahora presenta los ultimos caract. de cade
	//la cantidad de caract. que sobrepasa la dimension de cade
	cprintf("\r\n");
}

int largo_cadena(char *cadena)
{
	int largo=0;
	while (*cadena++) largo++;
	return largo;
}