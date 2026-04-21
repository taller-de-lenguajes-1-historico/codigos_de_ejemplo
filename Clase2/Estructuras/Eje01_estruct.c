#include <stdio.h>
#include <string.h>

// declaración de un tipo de dato fecha 
typedef struct
{
    int dia;
    int mes;
    int anio;        
}fecha;


// declaración de un tipo de dato cumpleanios 
typedef struct
{
    char nombrePersona[50];
    fecha fechaDeCumpleanios;
}cumpleanios;

// funciones para mostrar "fechas" y "personas" por pantalla
void PrintFecha(fecha miFecha);
void PrintPersona(cumpleanios Persona);

int main()
{
    //inicializando una estructura del tipo fecha
    fecha Mifecha = {10,02,2020};
    //Función para imprimir una estructura del tipo fecha en pantalla
    PrintFecha(Mifecha);
    
    //Creando una estructura del tipo cumpleanios 
    cumpleanios Persona;
    Persona.fechaDeCumpleanios = {15,07,1990};
    strcpy(Persona.nombrePersona, "Juan");

    PrintPersona(Persona);

    getchar();
    return 0;
}

void PrintFecha(fecha miFecha)
{
    printf("%d/%d/%d \n", miFecha.dia, miFecha.mes,miFecha.anio);
}

void PrintPersona(cumpleanios Persona)
{
    printf("fecha de cumpleanios:");
    PrintFecha(Persona.fechaDeCumpleanios);
    printf("Persona: %s", Persona.nombrePersona);
}