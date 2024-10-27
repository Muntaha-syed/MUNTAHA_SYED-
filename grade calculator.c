#include <stdio.h>
#include <conio.h>
void main(){
     int bio, eng, chem, math, phy; 
    
     printf("enter  bio marks:");
    scanf("%d",&bio); 
     printf("enter eng marks:");
    scanf("%d",&eng);
     printf("enter chem marks:");
    scanf("%d",&chem);
     printf("enter math marks:");
    scanf("%d",&math);
    printf("enter phy marks:");
    scanf("%d",&phy);
    
    float obtain_marks=bio+eng+chem+math+phy;
    float percentage=(obtain_marks/500)*100;
    
    printf("percentage:%f\n",percentage);
    if (percentage>=80)
	{
		printf("Grade: A+");
    }
	else if (percentage>=70)
	{	
		printf("Grade: A");
    }
    else if (percentage>=60)
	{	
		printf("Grade: B");
    }
    else if (percentage>=50)
	{	
		printf("Grade: C");
    }
    else
	{	
		printf("Grade: Fail");
    }
	getch();
	return 0;
}

