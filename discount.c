#include <stdio.h>
#include <conio.h>

int main() 
{
    int amount, final_amount, discount; 
    printf("Enter your amount: ");
    scanf("%d", &amount);
    
    if (amount >= 5000)
	{
        discount = amount * 20 / 100; 
        printf("You got a 20%% discount\n");
    }
	else if (amount >= 3000 && amount <= 5000) 
	{	
        discount = amount * 10 / 100; 
        printf("You got a 10%% discount\n");
    }
	else 
	{	
        printf("No discount\n");
    }
    final_amount = amount - discount; 
    printf("Final amount is %d\n", final_amount); 

    getch(); 
    return 0;
}
