#include <stdio.h>

int main() {
    float num = 1.00;
    while (num <= 2.00) {
        printf("%.1f ", num);
        num += 0.1;
    }
    return 0;
}
    