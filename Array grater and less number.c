/* Array find the sum and avg and find gaterthen lessthen number*/
#include<stdio.h>
int main()
{
    int x[4],sum=0,c=0;
    int avg;

    for(int i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
        sum=sum+x[i];

    }
    avg=sum/5;
    printf("%d",avg);
    for(int j=0;j<=4;j++)
    {
        if(x[j]>avg)
            c++;
    }
    printf("\nGeter than %d less than %d ",c,5-c);
}
