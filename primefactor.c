#include <stdio.h>

int main() {
    int n;

    printf("Enter a n: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    printf("\n");

    return 0;
}
