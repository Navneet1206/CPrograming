#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are: ", n);

    for (int num = 1; num <= n; ++num) {
        int originalNumber = num;
        int numDigits = 0;
        int sum = 0;

        while (originalNumber != 0) {
            originalNumber /= 10;
            numDigits++;
        }

        originalNumber = num;

        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            sum += pow(digit, numDigits);
            originalNumber /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
