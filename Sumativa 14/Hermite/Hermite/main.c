
#include <stdio.h>
#include <math.h>

int hn(int x, int n)
{
  if (n == 0)
  {
    return 1;
  }
  else if (n == 1)
  {
    return 2 * x;
  }
  else if (n > 1)
  {
    return 2 * x * hn(x, n - 1) - 2 * (n - 1) * hn(x, n - 2);
  }
}

int main(void)
{
    char again;
    printf("\n Polinomios de Hermite \n");
    
    
  int x;
  int n;
    do
    {
  
  printf ("Ingrese valor de x = ");
  scanf ("%d",&x);
  printf ("Ingrese valor n = ");
  scanf ("%d",&n);
  
    
  printf("h(x) = %i; n = %i", hn(x, n), n);
        printf("\n\n Try over? Y/N : ");
        scanf("%s", &again);
        x = 0;
        n = 0;
    }
    
    while(again == 'y' || again == 'Y');
}
