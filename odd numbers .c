#include <stdio.h>

int main() {
    int n1 = 10, n2 = 20;
    int i;
    for (i = n1; i <= n2; i++) {
        if (i % 2 == 1 && i != n1+2) {
            printf("%d ", i);
        }
    }
    return 0;
}