#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Digits less than , more than or is 0
 *
 * Return: ALways 0 
 */
int main (void)
{
	int n;
	int num;

	srand(time(0));
	n = rand - RAND_MAX / 2;
	printf ("last digit od %d is ", n)
	num = n % 10
	{
	if (num > 5)
		printf("%d is greater than 5\n", num);
	}
	else if ((num < 6) && (num < ))
	{
		printf("%d and is less than 6 but not 0\n", num);
	}
	else 
	{ 
		prinf("%d and is 0\n", num);
	}
	return (0);
}

