#include<stdio.h>
#include<conio.h>
int main()
{
	int original,reverse=0,n,rem;
	printf("Enter a number: ");
	scanf("%d",&original);
	n=original;
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
	 	n=n/10;
	}
	if(reverse==original)
	{
		printf("it is a palindrom number");
	}
	else
	{
		printf("It is not a palindrom number");
	}
	getch();
	return 0;
}