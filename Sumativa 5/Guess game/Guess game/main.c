
// Elaborar una aplicación de línea de comandos en C que permita al usuario adivinar una palabra secreta. El usuario tiene un máximo de 3 intentos para lograrlo. Los intentos ejecutados por el usuario deben aparecer en pantalla.


#include <stdio.h>
#include <string.h>





int main()
{
    char Magicword[] = "hello";
    char Guessword[10];
    char back[10];
    int count = 0;
    int limits = 3;
    int nolimits = 0;
    char again;
    

    
    printf("             ******  Anthony's Guess Game ******     \n\n");
    printf("             Guess a 5 letters word \n\n");
    printf("             LETS START! You have 3 tries  \n\n ");
    
    
    
    do
    {
    while ((strcmp(Guessword,Magicword) !=0) && nolimits == 0)
    {
        if (count < limits)
    {
        printf("\n\n ^^This is your %d try^^ \n\n", count+1);
        printf("\n\n Give me the Magicword: ");
        scanf("%s", Guessword);
        count++;
    }
        else {nolimits = 1;}
    };
    
    if (nolimits == 1)
    {
        printf("\n\n Sorry no more limits \n\n\n\n\n");
    }
    else
    {
    printf("\n\n****WIN!**** \n\n\n\n\n\n");
    }
       
        strcpy(Guessword, back);
        count = 0;
        
        
        printf("\n\n Would you like to play again?  Y/N : ");
        scanf("%s,\n\n\n\n\n", &again);
    }
    
    
    
    while (again == 'y' ||again =='Y');
    
    
    printf("\n\n Thanks for playing! \n\n\n\n\n");
  
    return 0;
}



