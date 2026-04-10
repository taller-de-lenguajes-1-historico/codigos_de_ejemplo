#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//Estructuras para la aplición

typedef struct
{
    char* Tipo;
    int Bonus;
    int Ataque;
}Arma;

typedef struct
{   
    char * Tipo;
    int Bonus;
    int Defensa;
}Armadura;

typedef struct
{
    char * Tipo;
    Arma  * Ataque;
    Armadura * Defensa;
}Personaje;

//ARREGLOS DE CADENA 
char * TiposDePersonajes[] = {"Mago", "Hada", "Orco", "Guerrera", "Escudero","Elfo"};
char * TiposDeArmas[] = {"Espada", "Arco", "Hacha", "Cuchillo", "Espada Milenaria","Latigo"};
char * TiposDeArmaduras[] = {"Coraza de Metal", "Casco", "Hombreras de Plata", "Botas de guerra", "Greba","Escudo"}; 


//Funciones 
Armadura * CrearArmadura(int Defensa, int bonus);
Personaje * CrearPersonaje();
void CargarArmadura(Personaje ** MiPersonaje, int defensa, int bounus );

int main()
{   
    srand (time(NULL));
    Personaje * player = CrearPersonaje();    
    CargarArmadura(&player,rand() % 5, rand() % 5);

    printf("%s", player->Defensa->Tipo);  
    free(player->Defensa->Tipo);
    free(player->Defensa);
    free(player);
    getchar();  
    return 0;
}

Personaje * CrearPersonaje()
{
    return (Personaje *) malloc(sizeof(Personaje));
}

void CargarArmadura(Personaje ** MiPersonaje, int defensa, int bounus )
{ 
    Armadura * nuevaArmadura  = CrearArmadura(defensa,bounus);
    (*MiPersonaje)->Defensa = nuevaArmadura;    
}

Armadura * CrearArmadura(int Defensa, int bonus)
{
    Armadura * nuevaArmadura = (Armadura *) malloc(sizeof(Armadura));  
    int aletorio = rand() % 5;          
    
    nuevaArmadura->Defensa = Defensa;
    nuevaArmadura->Bonus = bonus;
    
    int tamanio = strlen(TiposDeArmaduras[aletorio]);   
    nuevaArmadura->Tipo = (char *) malloc( tamanio * sizeof(char));    
    strcpy(nuevaArmadura->Tipo,TiposDeArmaduras[aletorio]);


    return nuevaArmadura;
}