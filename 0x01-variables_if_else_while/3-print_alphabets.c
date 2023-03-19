#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * mai - Program that prints the alphabet in lowercase and then in uppercase
 * Return : 0 (Success)
 */
int main(void)
{
        char lowercase, uppercase;
        for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
        {
                putchar(lowercase);
        }
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
        {
                putchar(uppercase);
        }
        putchar('\n');
        return (0);
}
