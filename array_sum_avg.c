/* Array find the sum and avg*/
#include<stdio.h>
int main()
{
    int x[4],sum=0;
    double avg;

    for(int i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
        sum=sum+x[i];

    }
    avg=sum/5;
    printf("%lf",avg);
}
