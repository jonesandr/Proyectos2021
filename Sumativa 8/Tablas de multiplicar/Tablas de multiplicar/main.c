
#include <stdio.h>
#include <math.h>

double Tablas (double numeros);

int main()
{
    double num;
    char keep;
    
    
    printf(" \n **** Anthony's Multiplication tables ****\n");
    
    do
    {
    printf("\n\n Hello give me a number: ");
    scanf("%lf", &num);
        
        Tablas(num);
        
        printf("\n\n Would you like to try over? Y/N ");
        scanf("%s", &keep);
    }
        while (keep=='y');
        printf("\n\n|Bye|\n\n\n\n\n");
        return 0;
}



double Tablas(double numeros)
{
    int p;

for (p = 0; p <= 12; p++)
    {
        printf("\n %.1lf * %d = %.1lf\n", numeros, p, numeros * p);
    }
    return 0;
}
