#include<stdio.h>
int main()
{
    int x1=0,x2=1,n,i,f;
    scanf("%d",&n);
    printf("%d\t",x1);
    printf("%d\t",x2);
    for(i=2;i<n;i++){
        f=x1+x2;
        x1=x2;
        x2=f;
        printf("%d\t",f);
    }
    return 0;
}

/*fibonacci series 0,1,1,2,3,5,......*/
