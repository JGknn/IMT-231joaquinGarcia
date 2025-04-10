#include <stdio.h>
#include "funciones.h"

int main(void)
{

int ingreso;
char v;

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
printf("%c\n",verifparimpar(ingreso));
}

}

}

