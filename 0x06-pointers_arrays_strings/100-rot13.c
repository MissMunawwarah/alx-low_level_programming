#include "main.h"

/**
 * rot13 - encodes a string using rot13
<<<<<<< HEAD
 * @s: string to encode
 *
 * Return: address of s
 */
=======
 * @s: string to encode 
 *
 * Return: address of s
*/
>>>>>>> 24bea0dd578e976f6a804a4d50271476d4a25228

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
