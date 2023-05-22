#include <stdio.h>
int main() {
    int week;

    printf("Enter the week number (1-7): ");
    scanf("%d", &week);

    if (week == 1) {
        printf("Sunday\n");
    } else if (week == 2) {
        printf("Monday\n");
    } else if (week == 3) {
        printf("Tuesday\n");
    } else if (week == 4) {
        printf("Wednesday\n");
    } else if (week == 5) {
        printf("Thursday\n");
    } else if (week == 6) {
        printf("Friday\n");
    } else if (week == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}