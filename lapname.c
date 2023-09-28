#include<stdio.h>

int main() 
{
    int i,j;

    for(i=1;i<=8;i++) 
    {

        

        for (j=1;j<=14;j++) 
        {
            if((j==1&&i>=1&&i<=5)||(j==14&&i>=1&&i<=5&&i!=3)||i==8||i==1||i==5||(j==8&&i>=5&&i<=8)||(j==7&&i==3)||(j==7&&i>=5&&i<=8))
                printf("*");
            else
                printf(" ");
        
            if(i==3&&j==4)
            printf("Navneet");
        
        }
        printf("\n");

    }

    return 0;
}
