/*
   conversión unaria
*/ 
 
 #include<stdio.h>
 int main()
 {
    int a = 336;         // integer a
    char b = 'g';       // character b  
    b = a;              // b convierte implicitamente a int según la tabla ascii a 103
    
    printf("b = %c", b);    
    getchar();
    return 0;
 } 