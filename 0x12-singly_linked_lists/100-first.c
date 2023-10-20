#include "lists.h"
#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - function to print stuff before main
 */
void before_main(void)
{
	printf("A tortoise, having pretty good sense of a hare's nature,");
	printf("challenges one to a race.)\n");
}
