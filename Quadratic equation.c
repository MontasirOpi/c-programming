#include <stdio.h>
#include <math.h>

int main()
{
    //variable declaration
    double a,b,c;
    double x1,x2;

    //capture input
    printf("\tQuadratic equation solver!\n");
    printf("Enter the values a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);

    //processing/computation
    if((b*b-4*a*c) ==0){
        x1 = x2 = (-b + sqrt(b*b-4*a*c))/(2*a);
    }
     if((b*b-4*a*c) >0){
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c) <0){
        printf("The equation has no roots\n");
        exit(1);
    }

    //output
    printf("The values of x1: %lf and x2: %lf\n",x1,x2);
    return 0;
}
