#include <stdio.h>

/* Function to print the alphabet in lowercase */
void print_alphabet(void)
{
    char l = 'a';

    while (l <= 'z')
    {
        putchar(l);
        l++;
    }
}

int main(void)
{
    /* Call the print_alphabet function */
    print_alphabet();

    /* Print a newline character to end the line */
    putchar('\n');

    return 0;
}
