#include <stdio.h>

int main() {
    int n, digi, pr = 1;
    

    printf("Enter a n: ");
    scanf("%d", &n);
    
    int i = n; 
    while (i > 0) {
        digi = i % 10;
        pr *= digi;
        i /= 10;
    }
    
    printf("The pr of the digits of %d is %d\n", n, pr);
    
    return 0;
}
