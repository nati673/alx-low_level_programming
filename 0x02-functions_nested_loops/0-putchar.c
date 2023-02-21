#include "main.h"
#include <unistd.h>
<<<<<<< HEAD

 /**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

=======
	/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
>>>>>>> 60668f22f20bb033ec3d1ad18d8ec3cd75d6b98e
