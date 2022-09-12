#include <stdio.h>
#include <stdlib.h>
#include <timp.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
  int n;
  for (n = '0' ; n <= '57' ; n++)
       putchar(n);
       printf("\n");
  return (0);
}
