#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,i;
	printf("Enter the year from where the leap year start to print= ");
	scanf("%d",&n1);
	printf("Enter the year to where the leap year counting stop= ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		if((i%4==0 && i%100!=0)||(i%400==0))
		{
			printf("%d , \t",i);	
		}
	}
	getch();
	return 0;
}