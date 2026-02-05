#include<stdio.h>
int main()
{
	int i,n;
	float s=0.0;
	printf("Input the Number of terms: ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d + ",i);
			s+=1/(float)i;
		}
		if(i==n)
		{
			printf("1/%d = ",i);
			s+=1/(float)i;
		}
	}
	printf("\n Sum of Series UPTO %d terms : %f\n",n,s);
	return 0;
}