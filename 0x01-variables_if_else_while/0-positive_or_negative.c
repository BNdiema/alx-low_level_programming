#include <stdio.h>
#include <time.h>

int main(void)
{
int n;
if (n < 0)
{
printf("%d is greater than 0: is positive\n", n);
}
else if (n == 0)
{
printf("%d is 0: is zero\n", n);
}
if (n > 0)
{
printf("%d is less than 0: is negative\n", n);
}
return (0);
}
