#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[1000],min,max;
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the element of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("max Element %d\n",max);
	printf("min element %d\n",min);
	getch();
	return 0;
}