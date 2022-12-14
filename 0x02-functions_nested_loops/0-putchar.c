#include <unistd.h>
#include "alx.h"

/**
*_putchar . nrites the character c to stdout
* @c: the character to print 
*
*on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
  return(write(1, &c, 1));
}
