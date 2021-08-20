
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int Vendedores = 3, Day = 5;
int  TotalDias = 0, TotalSemana = 0, P, M, N;
char Dias [1][5][10] = {{"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"}};

int main ()
{
     int Ventas [Vendedores][Day], i, j;
        
        for (i = 0; i < Vendedores; i++)
        {
            for (j = 0; j < Day; j++)
            {
            printf("Vendedor %d, Cuantas ventas se realizaron el dia %s: ", i+1, Dias[0][j]);
            scanf("%d", &N);
            printf("\n");
                P += N;
                for (M = 0; M < N; M++)
                {
                printf("Ventas del vendedor %d, Dia %s: ", i+1, Dias[0][j]);
                scanf("%d", &Ventas[i][j]);
                printf("\n");
                    TotalSemana  += Ventas[i][j];
                }
            }
        }
    
    
    printf("\n\n\n ***NASA (Nutrition Animal S.A)*** \n\n");
    printf(" Cantidad de ventas realizadas en la semana: %d \n\n ", P);
    printf("Ventas totales: $ %d \n\n", TotalSemana);
    printf(" Promedio de Ventas: $ %d \n\n\n\n\n\n\n", TotalSemana/P);
    
    
return 0;
}
