#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    printf("Sum of the expression is %.4f\n", sum);
    return 0;
}
