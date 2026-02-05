#include<stdio.h>
#include<conio.h>
int main()
{
	float bs,ta,da,hra,pf,ns;
	printf("Enter the Basic salary: ");
	scanf("%f",&bs);
	ta=(bs*14)/100;
	da=(bs*24)/100;
	hra=(bs*10)/100;
	pf=(bs*20)/100;
	ns=(bs+ta+da+hra-pf);
	printf("TA= %f",ta);
	printf("\nDA= %f",da);
	printf("\nHRA= %f",hra);
	printf("\nPF= %f",pf);
	printf("\nNet Salary= %f",ns);
	getch();
	return 0;
}