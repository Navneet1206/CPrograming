#include<stdio.h>

int main()
{
    int i,n,c=0,l,f;

    printf("Enter any number : ");
    scanf("%d",&n);
     l=n%10;
 
    for (i=0;i<=n;i++)
    {
     c++;
     n=n/10;
    }
     
    f=n;
    
    if(n<=10)
    {

        f=n%10;
  
    }
    printf("\nfirst digit  = %d  \nlast digit = %d",f,l);
    
   return 0;
} 