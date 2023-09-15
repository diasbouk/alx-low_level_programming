#include "main.h"

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
    long int num, prime;

    num = 612852475143;
    for (prime = 2; prime <= num; prime++)
    {
        if (num % prime == 0)
        {
            num /= prime;
            prime--;
        }
    }
    printf("%ld\n", prime);
    return (0);
	return (0);
}
