#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d,n;
   
    printf("Enter Variable a : ");
    scanf("%f",&a);
    printf("Enter Variable b : ");
    scanf("%f",&b);
    printf("Enter Variable c : ");
    scanf("%f",&c);

    d=(b*b)-(4*a*c);
   
    n = sqrt(d);

    if(d==0)
    {
        printf("roots are real and equal \n");
        x1 = (-b+n)/(2*a);
        x2 = (-b-n)/(2*a);
        printf("%f & %f",x1,x2);
    }

    else if(d>0)
    {
        printf("roots are real and different \n");
        x1 = (-b+n)/(2*a);
        x2 = (-b-n)/(2*a);
        printf("%f & %f",x1,x2);
    }

    else
    {
        printf("roots are imaginary");
    }
    return 0;
}
