#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	int sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("Sum of series : ");
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			printf("%d^2 +",i);
		}
		else
		{
			printf("%d^2 = %d",i,sum);
		}
	}
	getch();
	return 0;
}
