
#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char Num[1000];
    int i;
    long int Digito;
    
    printf(" \n  Hello give me a number: ");
    scanf("%s",Num);
    
    Digito = strlen(&*Num);
    
    for (i = 0; i < Digito; i++)
    {
        if (Num[i] == '.' || Num[i] == '-' || Num[i] == '/')
        { Digito = Digito - 1;}
    }
    
        printf(" \n\n | The number %s has a total of %ld digits | \n", &*Num, Digito);
        printf("  \n\n | Bye |\n\n\n\n");

    
    return 0;
}
