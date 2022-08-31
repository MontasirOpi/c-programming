#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=3;i<=n;i=i+2)
    {
       sum=sum+i*i;
    }
    printf("sum= %d",sum);
    return 0;
}

