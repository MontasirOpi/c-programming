//array item ,number find program
#include<stdio.h>
int main()
{
    int x[4],i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
    }
    int item,c=0;
    scanf("%d",&item);
    for(i=0;i<=4;i++)
    {
        if(item ==x[i])
        c++;
    }
    if(c>0)
        printf("Item Found");
    else
        printf("Item not found");
}
