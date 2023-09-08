#include <stdio.h>
#include <unistd.h>
/**
* printIt-Function to return the value of char
* Return: returns the words.
* void: no args
 */
void printIt(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
}
/**
* main-The main function
* Description: THe description
* void: no args
* Return: returns 0
 */

int main(void)
{
	printIt();
	return (0);
}
