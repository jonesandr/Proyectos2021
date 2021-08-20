
#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    int Numbers [1][10];
    int num;
    int Max;
    int time = 0;
    
    printf(" \n\n**** What number is the higher? **** \n\n");
    
    for (num = 0; num < 10; num++)
    {
        printf(" \n\n Hello give me the number %d: ", num+1);
        scanf("%d",&Numbers[0][num]);
    }
    
    Max = Numbers[0][0];
    
    
    
    for (num = 0; num < 10; num ++)
    {
       if (Max == Numbers[0][num])
       {
           time = time + 1;
       }
       else if ((Numbers[0][num]) > Max )
       {
           Max = (Numbers[0][num]);
           time = 1;
       }
    }
    
        
    printf("\n\n\n\n || The higher number is %d ||\n\n\n", Max);
    printf("\n\n || It was post %d times ||\n\n\n\n", time);
        
    
    
return 0;
}
