#include <stdio.h>
int main () 
{
char c[1000];
printf(" Start typing\n");
scanf("%s", c);
while (c)
{
if (getchar () == 0X0A)
{
puts ("User pressed Enter");
break;
}
}
return 0;
}
