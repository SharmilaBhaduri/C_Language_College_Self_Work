#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a=0;
	printf("Enter a Number for checking: ");
	scanf("%d",&num);
	if(num==0||num==1)
	{
		a=1;
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			a++;
			break;
		}
	}
	if(a==0)
	{
		printf("The number is prime number.");
	}
	else
	{
		printf("The number is not prime number.");
	}
	getch();
	return 0;
}