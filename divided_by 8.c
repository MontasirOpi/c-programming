//write a program that a number as a input and find the nearest number which is divided by 8
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    i=i+i;
    while(i%8 != 0)
    {
        i++;
    }
    printf("%d",i);
}
