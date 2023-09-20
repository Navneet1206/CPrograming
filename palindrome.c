#include<stdio.h>
int main()
{

    int i,n,pd=0,rem,a;

    printf("Enter the number : ");
    scanf("%d",&n);

    a=n;

    for(i=n;i!=0;i/=10)
    {

    rem=i%10;
    pd=pd*10+rem;

    }

    if(pd==a)
    {
         printf("Number is  palindrome ");
    }
    else 
    {
        printf("Number is not palindrome ");
    }

    return 0;
}