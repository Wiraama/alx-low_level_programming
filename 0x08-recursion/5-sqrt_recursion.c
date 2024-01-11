/**
 * main - check the code
 * 
 * Return: Always 0.
 */

int _sqrt_recursion_helper(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess;
    }

    if (guess * guess > n)
    {
        return -1;
    }

    return _sqrt_recursion_helper(n, guess + 1);
}
