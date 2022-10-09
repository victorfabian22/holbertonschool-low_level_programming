#include "main.h"

/**
 * _isupper - check if uppercase
 *@c: the character to be checked
 *
 * Description: return 1 if uppercase character and 0 if not
 * Return: if uppercase 1 otherwise 0
 */

int _isupper(int c)
{

	if ((c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);

}
