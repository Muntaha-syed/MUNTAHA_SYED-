// leap year checker
#include <stdio.h>
#include <conio.h>

void main()
{
  int year;
  printf("enter any year:");
  scanf("%d",&year);
  if(year%4==0){
    printf("this is leap year.",&year);
  }             
  else{
    printf("this is not a leap year.",&year);
   
  }    
   getch();
}
