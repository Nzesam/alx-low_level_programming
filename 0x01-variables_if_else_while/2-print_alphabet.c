 #include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{	
putChar(lowerCase);
lowerCase += 1;
}
putChar ('\n');
return(0);
}
