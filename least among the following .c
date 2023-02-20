#include <stdio.h>

int main() {
    int nums[] = {15, 20, 5, 24, 17};
    int n = sizeof(nums) / sizeof(int);
    int i, j, temp;

    // sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // print the least number
    printf("The least number is: %d\n", nums[0]);

    return 0;
}
