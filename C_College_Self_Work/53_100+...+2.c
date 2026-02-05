#include<stdio.h>
int main()
{
	int sum=0,i;
	printf("the series is 100 + 98 + 96 +...+ 2 = ? \n\t");
	for(i=100;i>=2;i=i-2)
	{
		if(i>0)
		{
			printf("  %d + ",i);
			sum=sum+i;
		}		
	}
printf(" %d = %d",i,sum);

	
	return 0;
}