#include<stdio.h>
int main()
{
    int  i,j,n,k=1;
    printf("Enter the number of start : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        printf(" ");
        for ( j=1;j<=i ; j++)
        {
          printf("\3 ");  
        
        }
 printf("\n");
    }

return 0;
}