 /* 
    Promocion y degradación 
 */
 
 #include<stdio.h>
 int main()
 {
   int a = 300;    
   unsigned long int d = 1;
   float c = 3.2;    
   

  int varInt = 11;    
  long int varLongInt = 1.2;
  float varFloat2 = 3.2;    
  

  // Promocion
  varFloat2 = varInt + varLongInt;  
  printf("int varFloat2 = %lf\n", varFloat2);   

  a = d + c;   
  // degradación
  printf("int a = %ld\n", a);
  printf("suma d + c = %.2f\n", d + c);
  
  char b = 300;
  printf("b = %d\n", b);
  getchar();
  return 0;
 }