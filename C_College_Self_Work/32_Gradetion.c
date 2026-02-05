#include<stdio.h>
#include<conio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float avg,percent;
	printf("Enter the marks of 5 subjects : ");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	avg=(float)total/5;
	percent=((float)total*100)/500;
	printf("the total marks of all subjects: %d\n",total);
	printf("The average marks of all subjects: %f\n",avg);
	printf("the percent of all subjects: %f\n",percent);
	if(percent>90)
	{
		printf("Your grade: A++");
	}
	else if(percent>=80)
	{
		printf("Your grade: A+");
	}
	else if(percent>=70)
	{
		printf("Your grade: B+");
	}
	else if(percent>=60)
	{
		printf("Your grade: B");
	}
	else if(percent>=50)
	{
		printf("Your grade: C+");
	}
	else if(percent>=40)
	{
		printf("Your grade: C");
	}
	else
	{
		printf("Your grade: D");
	}
	getch();
	return 0;
}