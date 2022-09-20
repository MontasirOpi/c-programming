//sum of 2d array
#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int x[3][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d %d",&x[i][j]);
            sum=sum+x[i][j];
        }
    }
    prinf("sum %d",sum);
}
