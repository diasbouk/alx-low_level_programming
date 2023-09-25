#include "main.h"

/**
 * print_number - check the code
 * @n: number to be printed
 * Return: Always 0.
 */
void print_number(int n)
{
    int num[1000];
    int i;
        i = 0;
    while (n != 0)
    {
        num[i] = n % 10;
        n = n / 10;
        i++;
    }
    while (i >= 0)
    {
        putchar(num[i]);
        i--;
    }
}
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}