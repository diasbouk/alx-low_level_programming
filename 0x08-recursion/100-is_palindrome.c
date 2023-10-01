#include "main.h"

/**
 * palindrome - check the code
 * @s: s
 * @findex: index 0
  * @lindex: index l
 * Return: Always 0.
 */
int palindrome(char *s, int findex, int lindex)
{
if (findex >= lindex)
return (1);
else if (findex == lindex)
palindrome(s, findex + 1, lindex - 1);
else
return (palindrome(s, findex + 1, lindex - 1));
return (palindrome(s, findex + 1, lindex - 1));
}

/**
 * is_palindrome - check the code
 * @s: str
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
if (length == 0 || length == 1)
{
return (1);
}
return (palindrome(s, 0, length - 1));
}
