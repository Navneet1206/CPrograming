#include <stdio.h>

int main() {
    int n, rn = 0;
    printf("Enter a n: ");
    scanf("%d", &n);
    
    for (int i = n; i > 0; i /= 10) 
    {
        int digit = i % 10;
        rn = rn * 10 + digit;
    }
    
    printf("Reverse of %d is: %d\n", n, rn);
    
    return 0;
}
