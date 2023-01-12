#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int height = 50;
int *ptr = &height;
*ptr = 55;
printf("%p\n", ptr);
printf("%d", *ptr);
return (0);
}
