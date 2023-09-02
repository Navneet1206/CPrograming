#include<stdio.h>
int main()
{
    int  i,j,n,k=1;
    printf("Enter the number of start : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(k=i;k<=n;k++)
        printf(" ");
        for ( j=i;j>=1; j--)
        {
          printf("* ");  
        
        }
 printf("\n");
    }

return 0;
}