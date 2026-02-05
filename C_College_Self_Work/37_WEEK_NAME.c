#include<stdio.h>
#include<conio.h>
int main()
{
	int wn;
	printf("Enter Week number: ");
	scanf("%d",&wn);
	if(wn==1)
	{
		printf("Sunday");
	}
	if(wn==2)
	{
		printf("Monday");
	}
	if(wn==3)
	{
		printf("Tuesday");
	}
	if(wn==4)
	{
		printf("Wednesday");
	}
	if(wn==5)
	{
		printf("Thursday");
	}
	if(wn==6)
	{
		printf("Friday");
	}
	if(wn==7)
	{
	printf("Saturday");
	}
	getch();
	return 0;
}