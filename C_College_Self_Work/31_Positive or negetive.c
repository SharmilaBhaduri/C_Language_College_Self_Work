#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number for checking : ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Number is positive");
	}
	else if(n<0)
	{
		printf("Number is negetive");
	}
	else
	{
		printf("It is Zero... ");
	}	
	getch();
	return 0;
}