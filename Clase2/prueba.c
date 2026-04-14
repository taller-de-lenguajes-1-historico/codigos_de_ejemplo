#include <stdio.h>
#include <stdlib.h>
int cuadrado(int a);
int main(){
    int var,resultado;
    int *pvar;
    pvar = &var;
    printf("Ingrese un numero: ");
    scanf("%d",&var);
    // fflush(stdin);
    resultado = cuadrado(var);
    printf("El cuadro del numero es: %d",resultado);
    scanf(" %c");
    return 0;
}
int cuadrado(int a){
   return a*a;
}