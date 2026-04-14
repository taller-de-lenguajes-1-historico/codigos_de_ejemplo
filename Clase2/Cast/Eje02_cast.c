 /* conversión binaria 
 */
 
 #include<stdio.h>
 int main()
 {
    int a = 11;    // entero a
    unsigned long int d = 1;
    float c = 3.2;
    double e = 1.0;
    long double f = 2.0;
    
    d = a + d;   // a es implicitamente convertido en un unsigned int
    c = a + c;   // a es implicitamente convertido en un float 
    e = a + e;   // a es implicitamente convertido en un double
    f = a + f;   // a es implicitamente convertido en un long double

    
    printf("int a = %ld\n", a);
    printf("unsigned long int d = %ld\n",d);
    printf("float c = %f\n",c);
    printf("double e = %lf\n",e);
    printf("long double f = %Lf\n",f);
    getchar();
    return 0;
 }