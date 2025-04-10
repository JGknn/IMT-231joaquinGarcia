#include <stdio.h>

char verifparimpar(int a)
{

if(a%2==0)
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
if(a==0)
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
