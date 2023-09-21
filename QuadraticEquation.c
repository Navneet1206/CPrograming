#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d,n;
   
    printf("Enter Coefficient a : ");
    scanf("%f",&a);
    printf("Enter Coefficient b : ");
    scanf("%f",&b);
    printf("Enter Coefficient c : ");
    scanf("%f",&c);

    printf("(%fx^2) + (%fx) + (%f) = 0\n",a,b,c);
   
    d=(b*b)-(4*a*c);
   
    n = sqrt(d);


    if(d>0||d==0)
    {


        if(d>0)
        {
            x1 = (-b+n)/(2*a);
            x2 = (-b-n)/(2*a);

            printf("Roots are real and distinct \nx1 = %f\nx2 = %f",x1,x2); 


        }

        else
        {

               x1 = (-b+n)/(2*a);
              x2 = (-b-n)/(2*a);

               printf("Roots are real and same or equal\n x1 = %f\nx2 = %f",x1,x2); 
        }
     
 
    }
      
      else
      {

        printf("Roots are imaginary ( Aukaat ke bahar )");
     
      }

    return 0;
}
