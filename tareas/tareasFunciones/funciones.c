#include <stdio.h>

char verifparimpar(int a)
{
	if(a%2==0) //la verificacion se hace mediante el valor del cociente cuando el numero ingresado 'a' sea dividido entre dos
	{
		return('p');
	}
	else
	{
		return('i');
	}
}
