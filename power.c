#include <stdio.h>

int main() {
    int base, ex,i,R = 1;
   
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the ex: ");
    scanf("%d", &ex);
    
    for (i = 0; i < ex; ++i) 
    {
        R = R* base;
    }
    
   
    printf("%d raised to the power %d is %d\n", base, ex, R);
    
    return 0;
}
