//PROGRAM TO PRINT FACTORIAL OF A NUMBER//
#include<stdio.h>
main()
{
	int f=1,n,i=1;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
	f=f*i;
	i++;
}
	
printf("Factorial of a number:%d",f);	
}