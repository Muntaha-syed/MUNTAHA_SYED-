#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("enter first number:");
    scanf("%d",&num1);
    
    printf("enter second number:");
    scanf("%d",&num2);
    printf("enter third number:");
    scanf("%d",&num3);
    if (num1>=num2&&num1>=num3)
    {
      printf("the largest nummber is%d\n",num1);
    }
    else if(num2>=num1 &&num2>=num3)
    {
      printf("the largest nummber is%d\n",num2);
    }
    else
    {
      printf("the largest nummber is%d\n",num3);
    }
      getch();
      return 0;
}                              
