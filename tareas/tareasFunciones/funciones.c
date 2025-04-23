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

int verifdigitos(int a)
{
	int i = 0;

	while(a!=0) //mientras el numero ingresado 'a' no sea igual a 0, entonces en cada iteración se lo divide entre 10, y se aumenta el contador i
	{
		a/=10;
		i++; 
	}
	return i;
}
