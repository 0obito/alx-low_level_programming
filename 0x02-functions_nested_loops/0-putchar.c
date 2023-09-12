# include <unistd.h>

/**
 * main- Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "_putchar\n";
write(1, message, 9);
return (0);
}
