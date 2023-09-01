
#include <unistd.h>

/**
 * _putchar - write c to standard output
 * @c: char to be printed to the standard output
 * Return:  integer value
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
