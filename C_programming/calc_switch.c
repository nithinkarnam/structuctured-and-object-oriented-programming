#include<stdio.h>
int main()
{
    char opr;int a,b;
    printf("enter the operation u wanna perform");
    scanf("%c",&opr);
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    switch(opr)
    {
        case '+':
        printf("%0.1f",(float)a+b);
        break;
        case '-':
        printf("%0.1f",(float)a-b);
        break;
        default:
        printf("error");
    }
    return 0;
}

