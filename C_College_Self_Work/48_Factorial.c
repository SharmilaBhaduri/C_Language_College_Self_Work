#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("Enter a Number: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error!");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
	printf("Factorial Number: %d",fact);
	}
	return 0;
}