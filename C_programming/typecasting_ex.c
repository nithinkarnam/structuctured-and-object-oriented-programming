#include <stdio.h>

int main()
{
    int a,b,add,sub,mul,div,mod;
    float div1;
   scanf("%d%d",&a,&b);
   add=a+b;
   sub=a-b;
   mul=a*b;
   div1=(float)a/b;
   div=a/b;
   mod=a%b;
   if (a>=0 && b>=0)
   {
 printf("%d\n",add);
 printf("%d\n",sub);
 printf("%d\n",mul);
 printf("%d\n",div);
 printf("%d\n",mod);
 printf("%.2f",div1);
   }
 else {
     printf("you entered negative number");
 }
    return 0;
}

