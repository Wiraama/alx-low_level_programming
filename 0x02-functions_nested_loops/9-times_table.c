#include <stdio.h>
/**
 * function that prints the 9 times table, starting with 0.
 * using prototype void times_table(void)
 */
void times_table(void) {
    for (int i = 0; i <= 10; i++) {
        printf("9 * %d = %d\n", i, 9 * i);
    }
}

int main() {
    times_table();  // Call the function to print the 9 times table
    return 0;
}
