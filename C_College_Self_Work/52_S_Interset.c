#include<stdio.h>
int main()
{
	int p,t,r;
	printf("Enter Principle value : ");
	scanf("%d",&p);
	printf("Enter value of Time period in Years : ");
	scanf("%d",&t);
	printf("Enter value of Rate of interest per annum : ");
	scanf("%d",&r);
	
	int i=(p*t*r)/100;
	printf("The Value of Simple Interset is : %d",i);
	
	return 0;
}