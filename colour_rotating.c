//1=green,2=blue,3=red,4=yellow,
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==1)
        printf("Color is : green");
    else if(n%4==2)
        printf("Color is : blue");
    else if(n%4==3)
        printf("Color is : red");
    else if (n%4==0)
        printf("Color is : yellow");
    return 0;
}
