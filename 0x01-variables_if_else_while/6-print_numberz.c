#include <stdio.h>
/**
 * main - imprime todos los numeros de un solo dijito
 * Return: si el codigo funciona retorna 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
