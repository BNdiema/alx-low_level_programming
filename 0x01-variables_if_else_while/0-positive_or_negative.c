#include <stdio.h>
#include <time.h>

int main(void)/* Main entry point */
{
  int n;      /* Variable declaration */

  scanf("%d", &n); /* The imput is put in n after a number is typed */
  if (n < 0)
    {
      printf("%d is greater than 0: is positive"); /* Prints out the number enterd + the statement */
    }
  scanf("%d", &n);
  if(n == 0)
    {
      printf("%d is 0: is zero");
    }
  scanf("%d", &n);
  if(n > 0);
    {
      printf("%d is less than 0: is negative\n");
    }
    return 0;
}  
	
  
