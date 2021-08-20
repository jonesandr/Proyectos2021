
#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char names[1][5][20];
    int num;
    long int Min=30;
    
    printf(" \n\n**** Whats name is the shorter? **** ");
    
    for (num = 0; num < 5; num++)
    {
        printf(" \n\n Hello give me the name %d: ", num+1);
        scanf("%s",names[0][num]);
    }
    
    for (num = 0; num < 5; num++)
    {
        if (strlen(names[0][num]) < Min)
        {
            Min = strlen(names[0][num]);
        }
    }
    
    for (num = 0; num <5; num ++)
        if (strlen(names[0][num]) == Min)
        {
        printf("\n\n\n\n || The shorter name is %s ||\n\n\n\n", names[0][num]);
        }
    

    
return 0;
}
