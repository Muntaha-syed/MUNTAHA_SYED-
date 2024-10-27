#include <stdio.h>
#include <conio.h>



int main() 
{
	int even_number, odd_number, number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number%2==0)
	{
		printf("The number %d is even", number);
	}
	else
	{
		printf("The number %d is odd", number);
	}
	getch();	
	return 0;
}
