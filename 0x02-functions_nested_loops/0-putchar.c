#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char message[] = "_putchar";
for (int count = 0; sizeof(message) ;count++)
{
if (message[count] == '\0')
{
putchar('\n');
break;
}
else
putchar(message[count]);
}
return (0);
}
