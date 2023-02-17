#include <stdio.h>

int main()
{
    int n, k, i, sum_even = 0, sum_odd = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    printf("\nNumbers from 1 to %d that are divisible by %d:\n", n, k);
    for(i=1; i<=n; i++) 
    {
        if(i%k == 0) 
        {
            printf("%d ", i);
        }
        if(i%2 == 0) 
        {
            sum_even += i;
        } else 
        {
            sum_odd += i;
        }
    }
    
    printf("\nSum of even numbers from 1 to %d: %d\n", n, sum_even);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sum_odd);
    
    return 0;
}
