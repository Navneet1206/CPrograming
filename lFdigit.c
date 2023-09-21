#include<stdio.h>

int main()
{
    int i,n,l,f,pro=0;

    printf("Enter any number : ");
    scanf("%d",&n);
    
     l=n%10;
 
    for (i=n;i!=0;i/=10)
    {
     
        f=i%10;

    }
     
    
    

    printf("\nfirst digit  = %d  \nlast digit = %d",f,l);
    
   return 0;
} 