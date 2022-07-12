#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <main.h>

/**
* main - generate random passwords.
* Return: 0.
*/

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 126);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2771 - sum);

	return (0);
}
