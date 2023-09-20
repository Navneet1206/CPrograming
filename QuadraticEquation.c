#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
   float d,n,x1,x2;

    printf("Enter Variable a : ");
    scanf("%d",&a);
    printf("Enter Variable b : ");
    scanf("%d",&b);
    printf("Enter Variable c : ");
    scanf("%d",&c);

    printf("(%dx^2) + (%dx) + (%d) = 0\n",a,b,c);
    d=(b*b)-(4*a*c);
   
    n = sqrt(d);


    if(d>0||d==0)
    {

      x1 = (-b+n)/(2*a);
      x2 = (-b-n)/(2*a);

     printf("x1 = %f\nx2 = %f",x1,x2); 
 
    }
      
      else
      {

        printf("Roots are emaginary ( Aukaat ke bahar )");
     
      }

    return 0;
}