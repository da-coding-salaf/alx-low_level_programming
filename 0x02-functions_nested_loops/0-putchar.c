#include "main.h"
/**
 *  main - Print "mymain" in new lide.
 *  Description: You are not allowed to use libraries.
 *  Return: 0
 */
int main(void)
{
char mymain[] = "_putchar";
int i = 0;
while (mymain[i] != '\0')
{
	_putchar(mymain[i]);
	i++;
}
_putchar('\n');
return (0);
}
