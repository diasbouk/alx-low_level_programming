#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/** main-The main function
* Description: THe description
 * void: no args
 * printf:Prints the string
 * Return: returns 0
 */

int main()
{
	char str[3];
	int fd = open("file.txt" , O_RDWR | O_CREAT ,0777);
	read(fd , str , sizeof(str));
	puts(str);
	return (0);
}
