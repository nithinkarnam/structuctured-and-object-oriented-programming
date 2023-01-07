#include <stdio.h>
int main()
{
int x=100;
printf("x's value postfix %d \n", x++);
printf("x's value %d \n", x);
x=100;
printf("x's value prefix %d \n", ++x);
printf("x's value %d \n", x);
return 0;
}
