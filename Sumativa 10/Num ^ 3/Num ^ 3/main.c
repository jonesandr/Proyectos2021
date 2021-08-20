
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double Num;
    double Pot = 3;
    char again;
    
    
    do
    {
    printf(" \n Hello give a number: ");
    scanf("%lf",&Num);
    
    double Total = pow(Num, Pot);
                       
    if (Num == 15)
    {
        printf(" \n The number typed was | Quince |\n\n\n\n");
    }
    
    else
    {
        printf(" \n %lf ^ 3 = | %lf |\n\n\n",Num,Total);
    }
        
    printf(" \n Would you like to try over? Y/N ");
    scanf("%s",&again);
    }
    
    while (again == 'y');
    
    printf(" \n |Bye| \n\n\n\n");
    
    return 0;
}
