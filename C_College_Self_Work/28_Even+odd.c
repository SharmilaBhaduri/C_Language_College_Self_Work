#include<stdio.h>
#include<conio.h>
int main()
{
	int number,even,odd,sum1=0,sum2=0,sum=0;
	printf("Enter the numbers from1 to 20= \n");
	for(number=1;number<=20;number++)
	{
		printf("%d\t",number);
	}
	printf("\nEven numbers between 1 to 20= \n");
	for(even=1;even<=20;even++)
	{
		if(even%2==0)
		{
			printf("%d\t",even);
			sum1=sum1+even;
		}	  		
	}  
	printf("=   %d",sum1);              
	printf("\nOdd numbers between 1 to 20= \n");
	for(odd=1;odd<=20;odd++)
	{
		if(odd%2!=0)
		{
			printf("%d\t",odd);
			sum2=sum2+odd;
		}
	}
	printf("=   %d",sum2);
	printf("\nsum of even and odd (all numbers)= ");
	sum=sum1+sum2;
	printf("%d",sum);
	getch();
	return 0;        
}        






