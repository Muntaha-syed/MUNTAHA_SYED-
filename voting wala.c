#include <stdio.h>
#include<conio.h>
void main()
{
int age;
  printf("enter your age age:\n");
  scanf("%d",&age);
  if(age>18){
  printf("you are eligible");
  }
  else{
       printf("your not eligible for voting!");
  }
  getch();
}
