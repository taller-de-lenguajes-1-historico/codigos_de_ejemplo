#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buff[50];
    scanf("%s", buff);
    int tamanioDeCadenaIngresadaPorUsuario = strlen(buff); // no considera el caracter nulo por lo tanto devuelve 10
   
    char * Cadena;     
    Cadena = (char *) malloc (sizeof(char) * tamanioDeCadenaIngresadaPorUsuario + 1); // Reserva de memoria para la cadena pero aumento 1 byte para el carcter nulo
    
    strcpy(Cadena, buff);  
    printf("%s",Cadena);
    
    getchar();  
    return 0;
}
