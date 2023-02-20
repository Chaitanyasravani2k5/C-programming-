#include<stdio.h>

int main()
{
    int n,i;
    
    printf("enter number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
       if(n%i==0)
        {
            printf("\n%d is not prime",n);
            break;
        }
    }
        if(n==i)
        {
            printf("\n%d is prime",n);
        }
    
}