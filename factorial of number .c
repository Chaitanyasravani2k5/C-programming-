#include <stdio.h>
int main() 
{
    int fact=1,n,i=1;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
       fact=fact*i;
       i=i+1;
    }
      
      printf("factorial is %d\t",fact);
}
