// GIVEN NUMBER IS A ALPHABET EITHER INTEGER NOR SYMBOL
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c", &ch);
	
	if((ch >='0') && (ch <='9'))
	{
		printf("Given character is an INTEGER");
    }
    else if((ch >='A' &&  ch <='Z') || (ch >='a' && ch <='z'))
    	{ 
	           printf("Given character is an ALPHABET");
      	}
    	else
    	{
		     printf("Given character is a SYMBOL");
     	}
   
}