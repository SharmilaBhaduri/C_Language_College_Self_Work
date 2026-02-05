#include<stdio.h>
#include<conio.h>
int main()
{
	int num,orin,rem,result=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
	orin=num;
	while(orin!=0)
	{
		rem=orin%10;
		result = result+(rem*rem*rem);
		orin=orin/10;
	}
	if(result==num)
	{
		printf("%d is an Armstrong Number.");
	}
	else
	{
		printf("%d is not an Armstrong Number.");
	}
	return 0;
}
