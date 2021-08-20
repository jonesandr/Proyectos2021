
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<curses.h>

struct Contactos
{
    char numero[10];
    char nombre[30];
    char correo[25];
} Agenda;



char search[10];
char Nombre[10];
FILE *First, *Second;
long i, Option, P, app;
char Opciones;


int main()
{


Principal:
printf("\n\n **** Lista de Contactos de Anthony ****");
printf("\n\n\n\n  MENU PRINCIPAL \n ************************** \n |1| Agregar nuevo contacto \n |2| Lista de contactos \n |3| Buscar \n |4| Editar \n |5| Eliminar \n |0| Salir \n ************************** \n");
printf(" Escoga una opcion : ");
scanf("%ld",&Option);
    
    
    switch(Option)
    {
        case 0:
        break;

            
        case 1:
            First = fopen("Nums.dll","a");
            for (;;)
            {
                fflush(stdin);
                printf(" \n Nombre : ");
                scanf("%[^\n]",Agenda.nombre);
                if( strcmp(Agenda.nombre," ") == 0)
                    break;
                fflush(stdin);
                printf(" Numero de telefono : ");
                scanf("%s",Agenda.numero);
                fflush(stdin);
                printf(" Correo electronico : ");
                scanf("%s",Agenda.correo);
                printf(" \n Salir? Presione TAB y luego ENTER : ");
                fwrite(&Agenda,sizeof(Agenda),1,First);
                printf("\n");
            }
            fclose(First);
            break;
            
        case 2:
                printf("\n\n **** Lista de Contactos de Anthony ****");
                printf("\n *************************************** \n *************************************** \n\n");
                
                for(i = 97; i <= 122; i = i+1)
                {
                    First = fopen("Nums.dll","r");
                    fflush(stdin);
                    app = 0;
                    
                
                    while (fread(&Agenda,sizeof(Agenda),1,First) == 1)
                    {
                        if(Agenda.nombre[0] == i || Agenda.nombre[0] == i - 32)
                        {
                            printf(" \n Nombre             : %s \n Numero de telefono : %s \n Correo electronico : %s\n",Agenda.nombre,Agenda.numero,Agenda.correo);
                            app++;
                        }
                    }
                    if(app!=0)
                    fclose(First);
                }
                break;
            
        case 3:
                    app = 0;
                    printf("\n\n\n **** Lista de Contactos de Anthony ****");
                    printf("\n *************************************** \n *************************************** \n");
                    printf("\n Buscar contacto : ");
                    fflush(stdin);
                    scanf("%[^\n]",search);
            
                    P = strlen(search);
                    First = fopen("Nums.dll","r");
                    printf("\n\n Resultado \n\n");
                    
                    while(fread(&Agenda,sizeof(Agenda),1,First) == 1)
                    {
                        for(i = 0; i <= P; i++)
                            Nombre[i] = Agenda.nombre[i];
                            Nombre[P] = '\0';
                        if(strcmp(Nombre,search) == 0)
                        {
                            printf("\n Nombre : %s \n Numero de telefono : %s \n Correo electronico : %s \n",Agenda.nombre,Agenda.numero,Agenda.correo);
                            app++;
                        }
                    }
                    if(app == 0)
                        printf("\n No se encuentra!");
                    else
                    fclose(First);
                break;
            
        case 4:
            app = 0;
                printf("\n\n\n **** Lista de Contactos de Anthony ****");
                printf("\n *************************************** \n *************************************** \n");
                First = fopen("Nums.dll","r");
                Second = fopen("New.dat","w");
                fflush(stdin);
                printf("\n Nombre a editar : ");
                scanf("%[^\n]",Nombre);
                
                while(fread(&Agenda,sizeof(Agenda),1,First) == 1)
                {
                    if(strcmp(Nombre,Agenda.nombre)!= 0)
                        fwrite(&Agenda,sizeof(Agenda),1,Second);
                }
                fflush(stdin);
                printf(" New Nombre : ");
                scanf("%[^\n]",Agenda.nombre);
                fflush(stdin);
                printf(" New Numero de telefono : ");
                scanf("%s",Agenda.numero);
                fflush(stdin);
                printf(" New Correo electronico : ");
                scanf("%s",Agenda.correo);
                printf("\n");
                fwrite(&Agenda,sizeof(Agenda),1,Second);
                fclose(First);
                fclose(Second);
                remove("Nums.dll");
                rename("New.dat","Nums.dll");
            break;
            
        case 5:
            fflush(stdin);
            printf("\n\n\n **** Lista de Contactos de Anthony ****");
            printf("\n *************************************** \n *************************************** \n");
            printf("\n\n Nombre : ");
            scanf("%[^\n]",Nombre);
            First = fopen("Nums.dll", "r");
            Second = fopen("New.dat", "w");
            
            
            while (fread(&Agenda,sizeof(Agenda),1,First)!= 0)
            if (strcmp(Nombre, Agenda.nombre)!= 0)
            fwrite(&Agenda, sizeof(Agenda), 1, Second);
            fclose(First);
            fclose(Second);
            remove("Nums.dll");
            rename("New.dat", "Nums.dll");
            break;
            
        default:
            printf("\n Error \n");
            break;
    }
            
    printf("\n\n Opciones \n\n |a| MENU PRINCIPAL [b] SALIR \n");
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
