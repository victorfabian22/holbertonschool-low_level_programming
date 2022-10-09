#include <stdio.h>

/**
 * main - print numbers, fizz, buzz, fizzbuzz
 *
 * Description: Print Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both otherwise print the number.
 * Return: Always 0
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 99)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("FizzBuzz ");

		else if ((a % 3) == 0)
			printf("Fizz ");

		else if ((a % 5) == 0)
			printf("Buzz ");

		else
			printf("%d ", a);
	a++;
	}


	printf("Buzz\n");

	return (0);
}
