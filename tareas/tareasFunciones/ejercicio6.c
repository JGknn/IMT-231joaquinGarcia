#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int a, b;

    while(3)
    {
        printf("Ingrese el numero 1: ");
        scanf("%d",&a);
        printf("Ingrese el numero 2: ");
        scanf("%d",&b);

        if((a==0)&&(b==0))
        {
            return 0;
        }
        else
        {
            printf("%d es %c que %d\n",a,comparar(a,b),b);
        }
    }
    return 0;
}
