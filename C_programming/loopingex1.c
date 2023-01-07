/*Write a program to generate the following series 95.0, 115.5, 138.0,..., 189.*/
#include <stdio.h>

int main()
{
    float num=95.0;int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("%.1f\n",num);
        num=num+(i*2)+20.5;
    }

    return 0;
}


