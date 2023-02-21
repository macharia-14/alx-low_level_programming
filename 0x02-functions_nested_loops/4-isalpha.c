#include "main.h"
/**
 * isalpha - a function that checks for alphabetical characters
 *
 * Return: 1 if c is a letter, lowercase, uppercase and 0 if otherwise
 *
 */
int _isalpha(int c)
{
       if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	       return(1);
       else
	       return(0);
}
