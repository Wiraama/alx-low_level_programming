#include <stdio.h>

/**
 * this program print lowercase letter only
 */
 int _islower(int c)
 
{
  char input;
  
  printf("Input letter");
  scanf(" %c", &input);
  
  if (input >= 'a' && input <= 'z')
  {
    printf("Lowercase letter\n");
    return 1;
  }
  else
  {
      printf("Error\n");
      return 0;
  }
