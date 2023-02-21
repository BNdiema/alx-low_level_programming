#include <stdio.h>
#include <time.h>

int main(void)
{
int n;
n = 0;
if (n < 0)
{
printf("%d is greater than 0: is positive");
}
else if (n == 0)
{
printf("%d is 0: is zero");
}
if (n > 0)
{
printf("%d is less than 0: is negative\n");
}
return (0);
}
