#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
    int i;
    for (i = 0; i < 16; i++)
    {
        if (i < 10)
        {
            putchar(i + '0'); // Convert numbers 0-9 to characters '0'-'9'
        }
        else
        {
            putchar(i - 10 + 'a'); // Convert numbers 10-15 to characters 'a'-'f'
        }
    }

    putchar('\n'); // Print a newline character to move to the next line
    return (0);
}
