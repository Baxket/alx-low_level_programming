#include "main.h"
/**
*_islower - checks if input is lowercase
*description: 'returns 0 or 1'
*Return: 0 
*/
int _islower(int c)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
if (a == c)
{
return (1);
}
}
return (0);
}
