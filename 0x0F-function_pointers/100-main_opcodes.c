#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
int bytes;
unsigned char *opcodes;
if (argc != 2)
{
printf("Error\n");
return 1;
}
bytes = atoi(argv[1]);
if (byte < 0)
{
printf("Error\n");
return 2;
}
opcodes = (unsigned char*) main;
for (i = 0; i < bytes; i++)
{
printf("%02x", opcodes[i]);
}
printf("\n");
return (0);
}
