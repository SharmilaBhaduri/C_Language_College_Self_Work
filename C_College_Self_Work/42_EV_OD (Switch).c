#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
		printf("Enter a number: ");
		scanf("%d",&n);
		switch (n%2)
		{
			case 0:
				printf("Number is EVEN");
			break;
			case 1:
				printf("Number is ODD");
			break;
		}
	getch();
	return 0;
}