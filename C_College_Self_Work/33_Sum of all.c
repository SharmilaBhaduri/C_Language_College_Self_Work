#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the max number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		if(i<n)
		{
			printf("%d +",i);
		}
		else
		{
			printf("%d = ",i);
		}
	}
	printf("%d",sum);
	getch();
	return 0;
}