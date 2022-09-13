/* write a program using the following conditions:
1.if any student gets 60% or more than 60% number of total number then he will get 1000tk.
2. if any student gets less than 60% number of total number then he will get 500tk.*/
#include<stdio.h>
int main()
{
    int total,n;
    printf("Enter total number:");
    scanf("%d",&total);
    printf("Enter number:");
    scanf("%d",&n);
    if((n*100/total)>=60)
        printf("1000tk");
    else if((n*100/total)<60)
        printf("500tk");
    return 0;

}
