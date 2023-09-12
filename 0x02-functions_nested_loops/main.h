#include <stdio.h>
	void print_alphabet(void)
	{
		int i = 97;
		putchar(i);
		i++;
		if (i <= 122)
		print_alphabet();
	}
