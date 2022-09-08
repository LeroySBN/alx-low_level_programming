#include <stdio.h>
#include <conio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("\nSize of a char: %d byte(s)" ,sizeof(char));
printf("\nSize of an int: %d byte(s)" ,sizeof(int));
printf("\nSize of a long int: %d byte(s)" ,sizeof(long int));
printf("\nSize of a long long int: %d byte(s)" ,sizeof(long long int));
printf("\nSize of a float: %d byte(s)" ,sizeof(float));
getch();
return 0;
}
