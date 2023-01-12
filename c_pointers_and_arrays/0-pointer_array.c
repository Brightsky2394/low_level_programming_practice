#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int arr[5] = {2, 5, 7, 9, 11};
int i = 0;
while (i < 5)
{
printf("%d = %p\n", *(arr + i), arr + i);
i++;
}
return (0);
}

