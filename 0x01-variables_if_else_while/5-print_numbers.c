#include <stdio.h>

/**
 * main -entry point
 *  Declaration: to print numbers of base 10
 *  
 *  return: always 0
 */
int main(void)
{
        char n;

        /* to print numbers*/
        for (n = 0; n <= '10'; ++n);
        {
                putchar (n);
        }
        putchar ('\n');
        
        return(0);
}
