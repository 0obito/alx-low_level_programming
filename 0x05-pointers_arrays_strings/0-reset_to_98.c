#include <unistd.h>
#include "main.h"

/**
 * reset_to_98 - Entry point
 *
 * Description: updates the value a pointer points to to 98
 *
 * @n: the int parameter
 */
void reset_to_98(int *n)
{
int s = 98;
*n = s;
}
