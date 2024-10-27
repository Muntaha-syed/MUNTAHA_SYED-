#include <stdio.h>
#include <conio.h>

int main() 
{
	float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator that you wanna prform(+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') 
	{
        printf("%f + %f = %f\n", num1, num2, num1 + num2);
    } 
	else if (operator == '-') 
	{
        printf("%f - %f = %f\n", num1, num2, num1 - num2);
    } 
	else if (operator == '*') 
	{
        printf("%f * %f = %f\n", num1, num2, num1 * num2);
    } 
	else if (operator == '/') 
	{
        if (num2 != 0) {
            printf("%f / %f = %f\n", num1, num2, num1 / num2);
        } else {
            printf("Error\n");
        }
    } 
	else 
	{
        printf("Invalid operator\n");
    }
	getch();
	return 0;
}
