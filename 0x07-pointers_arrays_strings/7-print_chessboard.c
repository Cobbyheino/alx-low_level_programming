#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int check;
	int mate;

	for (check = 0; check < 8; check++)
	{
		for (mate = 0; mate < 8; mate++)
			_putchar(a[check][mate]);
	}
	_putchar('\n');

}
