
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<curses.h>

typedef struct
{
    char Cuenta[15];
    char Nombre[30];
    char Balance[100];
} Banco;



char search[30];
char Account[30];
FILE *First, *Second;
long i, Option, P, app, Update;
char Opciones,Opciones2;


int main()
{
   Banco Cliente;

Principal:
printf("\n\n **** Sistema de administracion bancario ****");
printf("\n\n\n\n  MENU  \n -------------------------- \n |1| Crear nueva cuenta \n |2| Lista de clientes \n |3| Validar detalles de cuenta \n |4| Actualizar informacion  \n |5| Eliminar cuenta \n |0| Salir \n -------------------------- \n");
printf(" Escoga una opcion : ");
scanf("%ld",&Option);
    
    
    switch(Option)
    {
        case 0:
        break;

            
        case 1:
            
            printf("\n\n ********** INTERNATIONAL BANK *********");
            printf("\n *************************************** \n         Creacion de nueva cuenta            \n *************************************** \n\n");
            
            First = fopen("Bank.dll","ab+");
            for (;;)
            {
                fflush(stdin);
                printf(" \n Propietario de la cuenta : ");
                scanf("%[^\n]",Cliente.Nombre);
                if( strcmp(Cliente.Nombre," ") == 0)
                    break;
                
                fflush(stdin);
                printf(" Numero de cuenta (00-00-0000-000) : ");
                scanf("%s",Cliente.Cuenta);
                fflush(stdin);
                printf(" Balance disponible : ");
                scanf("%s",Cliente.Balance);
                printf(" \n ---- SALIR?? Presione TAB y luego ENTER ---- \n");
                fwrite(&Cliente,sizeof(Banco),1,First);
            }
            fclose(First);
            break;
            
            
        case 2:
            
            printf("\n\n ********** INTERNATIONAL BANK *********");
            printf("\n *************************************** \n             Cuentas vigentes            \n *************************************** \n\n");
            
            for(i = 97; i <= 122; i = i+1)
            {
                First = fopen("Bank.dll","rb");
                fflush(stdin);
                while (fread(&Cliente,sizeof(Banco),1,First) == 1)
                {
                    if(Cliente.Nombre[0] == i || Cliente.Nombre[0] == i - 32)
                    {
                        printf(" \n Propietario de la cuenta : %s \n Numero de cuenta : %s \n Balance disponible : %s \n\n",Cliente.Nombre,Cliente.Cuenta,Cliente.Balance);
                    }
                }
                fclose(First);
            }
            break;
            
            
        case 3:
                    
            printf("\n\n ********** INTERNATIONAL BANK *********");
            printf("\n *************************************** \n          Validacion de cuenta         \n *************************************** \n\n");
            
            app = 0;
            printf("\n Validar Cuenta (Numero de cuenta completo) : ");
            fflush(stdin);
            scanf("%[^\n]",search);
            
            P = strlen(search);
            First = fopen("Bank.dll","rb");
            printf("\n\n -- RESULTADOS -- \n\n");
                
            while(fread(&Cliente,sizeof(Banco),1,First) == 1)
                {
                    for(i = 0; i <= P; i++)
                        Account[i] = Cliente.Cuenta[i];
                        Account[P] = '\0';
                    if(strcmp(Account,search) == 0)
                    {
                        printf("\n Propietario de la cuenta : %s \n Numero de cuenta : %s \n Balance disponible : %s \n",Cliente.Nombre,Cliente.Cuenta,Cliente.Balance);
                        app++;
                    }
                }
                if(app == 0)
                    printf("\n Cuenta no registrada!");
                else
                fclose(First);
            break;
            
        case 4:
        
            printf("\n\n ********** INTERNATIONAL BANK *********");
            printf("\n *************************************** \n          Actualizacion de cuenta         \n *************************************** \n\n");
            
           // char Account [30];
            
            fflush(stdin);
            printf("\n Actualizar cuenta (Numero de cuenta completo) : ");
            scanf("%[^\n]",Account);
            
            First = fopen("Bank.dll","rb+");
            fread(&Cliente, sizeof(Banco), 1, First);
            fseek(First, 0, SEEK_SET);
            while(fread(&Cliente, sizeof(Banco), 1, First) == 1)
            {
                if(strcmp(Cliente.Cuenta,Account) == 0)
                {
                    do
                    {
                    printf(" \n\n                         --- Escoja una opcion --- \n\n |1| Actualizar nombre de la cuenta  |2| Actualizar numero de la cuenta  |3| Actualizar balance de la cuenta : ");
                    scanf("%ld",&Update);
             
            switch (Update)
            {
                case 1:
                    
                    fflush(stdin);
                    printf(" \n Ingrese el nuevo nombre de la cuenta : ");
                    scanf("%[^\n]",Cliente.Nombre);
                    fseek(First,-sizeof(Cliente),SEEK_CUR);
                    fwrite(&Cliente, sizeof(Banco), 1, First);
                    remove("Bank.d11");
                    printf("\n\n\n  *** Actualizacion completada ***");
                    break;
                    
                case 2:
                    
                    printf(" \n Ingrese el nuevo numero de cuenta (00-00-0000-000) : ");
                    scanf("%s",Cliente.Cuenta);
                    fseek(First,-sizeof(Cliente),SEEK_CUR);
                    fwrite(&Cliente, sizeof(Banco), 1, First);
                    remove("Bank.d11");
                    printf("\n\n\n  *** Actualizacion completada ***");
                    break;
                    
                case 3:
                    
                    printf(" \n Ingrese el nuevo balance : ");
                    scanf("%s",Cliente.Balance);
                    fseek(First,-sizeof(Cliente),SEEK_CUR);
                    fwrite(&Cliente, sizeof(Banco), 1, First);
                    remove("Bank.d11");
                    printf("\n\n\n  *** Actualizacion completada ***");
                    break;
            }
                        fflush(stdin);
                        printf(" \n\n Desea realizar otra actualizacion en el usuario? (Y/N) : ");
                        scanf("%[^\n]",&Opciones2);
                    }
                    while (Opciones2 == 'y');
                   
                }
            }
            fclose(First);
            break;
            
            
            
        case 5:
            
            printf("\n\n ********** INTERNATIONAL BANK *********");
            printf("\n *************************************** \n             Cerrando cuenta         \n *************************************** \n\n");
            
            fflush(stdin);
            printf("\n\n Eliminar cuenta (Numero de cuenta completo) : ");
            scanf("%[^\n]",Account);
            First = fopen("Bank.dll", "rb+");
            Second = fopen("Bank2.dat", "wb");
            
            while (fread(&Cliente,sizeof(Banco),1,First)!= 0)
            if (strcmp(Account, Cliente.Cuenta) != 0)
            fwrite(&Cliente, sizeof(Banco), 1, Second);
            remove("Bank.dll");
            printf("\n\n\n  *** Cuenta eliminada exitosamente ***");
            fclose(First);
            fclose(Second);
            rename("Bank2.dat", "Bank.dll");
            break;
            
        default:
            printf("\n Error!! \n");
            goto Principal;
            break;
    }
            
    printf("\n\n\n\n\n Opciones \n\n |a| MENU PRINCIPAL |b| SALIR \n");
    scanf("%s",&Opciones);
    
    switch (Opciones)
    {
        case 'a':
            goto Principal;
        case 'b':
            break;
    }
    
    return 0;
}

