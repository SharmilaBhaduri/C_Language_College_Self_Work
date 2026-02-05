#include<stdio.h>
#include<conio.h>
int main()
{
	int n; 
	printf("Enter a number for check : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("This number is Even number");	
	}
	else
	{
		printf("This number is Odd number");
	}
	getch();
	return 0;
}
