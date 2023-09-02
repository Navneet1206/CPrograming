#include <stdio.h>

int main() {
    int n,d;
    printf("Enter a n: ");
    scanf("%d", &n);
    
   

    int sum = 0;
    
    for ( int i = n; i > 0; i /= 10) {
        d = i % 10;
        sum += d;
    }
    
    printf("Sum of digits in %d is: %d\n", n, sum);
    
    return 0;
}
