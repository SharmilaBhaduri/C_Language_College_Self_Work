#include<stdio.h>
int main()
{
	int num,rem,result=0;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		result=rem+(result*10);
		num=num/10;
	}
	printf("Reversed Number is : %d",result);
	
	return 0;
}