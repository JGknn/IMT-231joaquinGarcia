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

int sumar(int num1, int num2)
{
	return (num1+num2);
}

int restar(int num1, int num2)
{
	return (num1-num2);
}

int multiplicar(int num1, int num2)
{
	return (num1*num2);
}

char comparar(int a, int b)
{
    if(a>b)
    {
        return '>';
    }
    if(a<b)
    {
        return '<';
    }
    if(a==b)
    {
        return '=';
    }
}

int multiplo3(int a)
{
	int c=0;

	while((a%3)==0)
	{
		c++;
		a /= 3;
	}
	return c;
}

int factorial(int a)
{
    int m = 1;
    for (int i = 0; i < a; i++)
    {
        m *= (a-i);
    }
    return m;
}

int contardig(int a)
{
    int i = 0;
    if(a == 0)
    {
        i = 1;
    }
    else
    {
        while(a!=0)
        {
            a/=10;
            i++;
        }
    }
    return i;
}

int invertirnum(int a)
{
    int r = 0;
    while(a != 0)
    {
        r = (r*10) + (a%10);
        a /= 10;
    }
    return r;
}
