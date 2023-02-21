#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter the no to reverse:");
    scanf("%d",&num);
    while(num!=0)
    {
       rem=num%10;
       rev=rem+(rev*10);
       num=num/10;
    }
    printf("reverse is %d", rev);
}