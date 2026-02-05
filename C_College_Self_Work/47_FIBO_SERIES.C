#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	int a=0,b=1,c=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
	printf("Fibonecci Series:\n %d\n %d\n",a,b);
	for(i=0;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	getch();
	return 0;
}