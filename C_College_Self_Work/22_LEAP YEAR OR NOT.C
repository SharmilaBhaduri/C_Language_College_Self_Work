#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter a Year for cheack : ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||(year%400==0))
	{
		printf("This Year is Leap Year");
	}
	else 
	{
		printf("This year is not Leap Year");
	}
	getch();
	return 0;
}