#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 1 to indicate failure
 */

int main(void)
{
char msg[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";	
write(STDERR_FILENO, msg, sizeof(msg) - 1);	
return (1);
}
