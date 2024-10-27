// SIMPLE INTEREST CALCULATOR:.
#include <stdio.h>
#include <conio.h>

void main()
{
  float interest,principle,rate,time;
  printf("enter amount:");
  scanf("%f",&principle);
  printf("enter rate(as percent)");
  scanf("%f",&rate);
  printf("enter time year:");
  scanf("%f",&time);
  interest=principle*rate*time;
  printf("interest:%.2f",interest);
  getch();
}
