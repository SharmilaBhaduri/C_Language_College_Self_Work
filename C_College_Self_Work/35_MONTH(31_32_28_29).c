#include<stdio.h>
#include<conio.h>
int main()
{
	int mn;
	printf("Enter a Month Number= ");
	scanf("%d",&mn);
	if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)
	{
		printf("31 Days");
	}
	else if(mn==4||mn==6||mn==9||mn==11)
	{
		printf("30 Days");
	}
	else if(mn==2)
	{
		printf("Februaru is the month of 28 or 29 always");
	}
	else
	{
		printf("Wrong input , please input the month number between 1 to 12");
	}
	getch();
	return 0;
}