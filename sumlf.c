#include<stdio.h>

int main()
{
    int i,n,c=0,l,f;

    printf("Enter any number : ");
    scanf("%d",&n);
     l=n%10;
 
    for (i=0;i<=(n>=10);i++)
    {
     c++;
     n=n/10;
    }
     
   
    f=n;

    printf(" sum = %d ",f+l);

    
    
   return 0;
} 