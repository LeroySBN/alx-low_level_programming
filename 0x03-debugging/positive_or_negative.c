#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX / 2;
/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
return (0);
}
