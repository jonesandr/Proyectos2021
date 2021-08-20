#include <stdio.h>
#include <math.h>

int variables (double a, double b, double c, double *x1, double *x2);

int main (){
    double a, b, c, x1, x2;
    
    printf("Dame el valor de a: \n");
    scanf("%lf", &a);
    printf("Dame el valor de b: \n");
    scanf("%lf", &b);
    printf("Dame el valor de c: \n");
    scanf("%lf", &c);
    variables(a, b, c, &x1, &x2);
    printf("Solucion x1: %lf \n", x1);
    printf("Solucion x2: %lf \n", x2);
    
}
int variables (double a, double b, double c, double *x1, double *x2){
    *x1 = (-b+(sqrt(b*b-4*a*c)))/2*a;
    *x2 = (-b-(sqrt(b*b-4*a*c)))/2*a;
    return 0;
}
