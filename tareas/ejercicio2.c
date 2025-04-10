#include <stdio.h>
#include "funciones.h"

int main(void)
{

int ingreso;

while(3)
{

printf("ingrese un numero, por favor: ");
scanf("%d",&ingreso);

if(ingreso == -1)
{
break;
}
else
{
printf("%d\n",verifdigitos(ingreso));
}

}

}

