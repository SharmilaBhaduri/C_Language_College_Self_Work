#include<stdio.h>
#include<conio.h>
int main()
{
	int n; 
	printf("Enter th number which is divided by 5 and 11= \n");
	for(n=1;n<=100;n++)
	{
		if(n%5==0 && n%11==0)
		{
			printf("%d\t",n);
		}
	}
	getch();
	return 0;
}