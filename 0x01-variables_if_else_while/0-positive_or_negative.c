#include <stdlib.h>
#include <time.h>
/* more headers goes there*/

/**
 * main - Entry point
 * Description - prints if random generated number is +tive, zero or -tive
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n" , n);
	if else (n == 0)
		printf("%d is zero\n" , n);
	else
		printf("%d is positive\n" , n);
	return (0);
}
