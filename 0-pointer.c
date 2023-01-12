#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int height = 56;
int *ptr = &height;
printf("%p\n", ptr);
printf("%d", *ptr);
return (0);
}
