#include<stdio.h>

int main()
{
    int i,n,c=0;

    printf("Enter any number : ");
    scanf("%d",&n);

    for (i=0;i<=n; i++)
    {
     c++;
     n=n/10;
    }
    
    printf("%d",c);
    
   return 0;
} 