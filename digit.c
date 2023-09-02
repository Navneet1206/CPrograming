#include <stdio.h>

int main() {
    int n;
    printf("Enter a n: ");
    scanf("%d", &n);
    
    int count = 0;
    
    for (int i = n; i != 0; i /= 10) {
        count++;
    }
    
    printf("Number of digits in %d is: %d\n", n, count);
    
    return 0;
}

