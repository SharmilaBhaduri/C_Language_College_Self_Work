#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	float result;
	char ch;
	printf("Choose any operation(+|-|*|/|%): ");
	scanf("%c",&ch);
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the econd number: ");
	scanf("%d",&num2);
	result=0;
	switch(ch)
	{
		case'+':
			result=num1+num2;
		break;
		case'-':
			result=num1-num2;
		break;
		case'*':
			result=num1*num2;
		break;
		case'/':
			result=num1/num2;
		break;
		case'%':
			result=num1%num2;
		break;
		default:
			printf("Invalid input,Cheack the data again....");
	}
	printf("Result : %d%c%d=%f",num1,ch,num2,result);
	getch();
	return 0;
}