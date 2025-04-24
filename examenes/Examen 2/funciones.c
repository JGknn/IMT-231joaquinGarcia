#include <stdio.h>

int esPrimo(int a) //numero primo: no es divisible por ningun numero solo por si mismo 2,3,5,7,11,13,17,19,23
{
	int c = 0;
	for(int i = 1; i<=a; i++)
	{
		if(a%i==0) //se divide a la entrada entre el valor de i que empieza en 1 y va aumentando
		{
			c++;
		}
	}
	return c;
}

int factorial(int a)
{
    int m = 1;
    for (int i = 0; i < a; i++)
    {
        m *= (a-i); //la formula de factorial, vista como serie es x! = x*(x-1)*(x-2)*...*1
    }
    return m;
}

int contarDigitos(int a)
{
	int c = 0;
	for(int i=1;i<=a;i++)
	{
		if(i%2==0) //la verificacion se hace mediante el valor del cociente cuando el numero ingresado 'a' sea dividido entre dos
		{
			c++;
		}
	}
	return c;
}
