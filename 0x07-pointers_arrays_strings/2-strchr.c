/**
 * _strchr - check the code
 * @s: string
 * @c: character to be pointed
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return ((char *) s);
}
s++;
}
return ('\0');
}
