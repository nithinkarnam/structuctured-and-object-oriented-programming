#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter values of a,b,c \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a>b) && (a>c))
    {
    
        printf("a is greatest \n");
    }
    else if (b>c)
    {
        printf("b is greatest \n");
    }
    else if (c>b)
    {
        printf("c is greatest \n");
    }
    else if ((a==0) || (b==0) || (c==0))
    {
        printf("The product is 0 \n");
    }
    if(a==b)
    {
        printf("a is equal to b");
    }
    else if(a==c)
    {
        printf("a and c are equal");
    }
    else if(b==c)
    {
        printf("b and c are equal");
    }
    
    
    return 0;
}
