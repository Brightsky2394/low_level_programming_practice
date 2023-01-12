#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0;
 */
int main(void)
{
int arr[5] = {2, 4, 6, 8, 10};
int j;
while (j < 5)
{
*arr = 3;
*(arr + 1) = 5;
*(arr + 2) = 7;
*(arr + 3) = 9;
*(arr + 4) = 11;
printf("%d\n", *(arr + i));
j++;
}
return (0);
}
