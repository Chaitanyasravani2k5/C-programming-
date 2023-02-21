#include<stdio.h>
int main ()
{
    int num,temp,rem,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
      rem=num%10;
      rev=rem+(rev*10);
      num=num/10;
    }
    if(rev==temp)
    printf("given number%d is palindrome",temp);
    else
    printf("given number%d is not palindrome",temp);
}