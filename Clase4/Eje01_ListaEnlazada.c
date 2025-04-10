/*RESERVA DINAMICA DE MEMORIA*/
#include <stdio.h>//contiene las funciones de entrada salida desde la consola
#include <stdlib.h>
#include <string.h>

const int DIM = 15;

typedef struct Tnodo
{
   int dato;
   struct Tnodo * siguiente;
}Tnodo;

Tnodo *CrearListaVacia();
Tnodo * CrearNodo(int dato);
void InsertarNodo(Tnodo ** Start , Tnodo *Nodo);
void InsertarNodoAlFinal(Tnodo ** Start,Tnodo *Nodo);
Tnodo * BuscarNodo(Tnodo ** Start,int dato);
Tnodo * QuitarNodo(Tnodo ** Start,int dato);
Tnodo * EliminarNodo(Tnodo * nodo);

int main()
{

  //Cabecera de la Lista
  Tnodo * Start = CrearListaVacia();
  // nuevo nodo
  //CrearNodo(rand() % 99); 
  //CrearNodo(&Start, 5); 
  
  // Insertar nodo a la lista
  InsertarNodo(&Start, CrearNodo(10));
  InsertarNodo(&Start, CrearNodo(20));
  InsertarNodo(&Start, CrearNodo(30));

  // Tnodo * buscado =BuscarNodo(&Start,20);
  Tnodo * eliminar = QuitarNodo(&Start, 30);
  free(eliminar);
  Tnodo * Aux = Start;
  printf("\n");
  while (Aux)
  {
    printf("%d \n", Aux->dato);
    Aux = Aux->siguiente;
  }
  
  getchar();
  return 0;
}

Tnodo * EliminarNodo(Tnodo * nodo)
{
  free(nodo);
}

Tnodo * QuitarNodo(Tnodo **Start, int dato) {
    Tnodo ** aux = Start;  // Usamos un puntero doble para apuntar al puntero actual.
    
    // Iteramos sobre la lista hasta encontrar el dato o alcanzar el final de la lista.
    while (*aux != NULL && (*aux)->dato != dato) {
        aux = &(*aux)->siguiente;
    }

    // Si encontramos el nodo con el dato especificado, lo eliminamos.
    if (*aux) {
        Tnodo *temp = *aux;  // Guardamos el nodo a eliminar en una variable temporal.
        *aux = (*aux)->siguiente;  // Desvinculamos el nodo de la lista.
        temp->siguiente =NULL; // Ponemos en NULL el puntero siguiente para asegura no llevar vinculos por fuera de la lista
        return temp;
    }
    return NULL;
}

Tnodo * BuscarNodo(Tnodo ** Start,int dato)
{
  Tnodo * Aux = *Start;
  while (Aux && Aux->dato != dato)
  {
    Aux = Aux->siguiente;
  }
  return Aux;
}


Tnodo * CrearListaVacia()
{
    return NULL;
}

Tnodo * CrearNodo(int dato)
{
  Tnodo * nodo = (Tnodo *) malloc(sizeof(Tnodo));
  nodo->dato = dato;
  nodo->siguiente = NULL;
  return nodo;
}

void InsertarNodo(Tnodo ** Start, Tnodo *Nodo)
{
    Nodo->siguiente = *Start;
    *Start  = Nodo ;
}


void InsertarNodoAlFinal(Tnodo ** Start,Tnodo * nodo)
{
  Tnodo * Aux = *Start;

  while (Aux->siguiente)
  {
    Aux = Aux->siguiente;
  }
   Aux->siguiente = nodo;
}

