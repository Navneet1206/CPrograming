#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2,d,n;
   
    printf("Enter Variable a : ");
    scanf("%d",&a);
    printf("Enter Variable b : ");
    scanf("%d",&b);
    printf("Enter Variable c : ");
    scanf("%d",&c);

    d=(b*b)-(4*a*c);
   
    n = sqrt(d);

    x1 = (-b+n)/(2*a);
    x2 = (-b-n)/(2*a);

    printf("x1 = %d\nx2 = %d",x1,x2);    

    return 0;
}