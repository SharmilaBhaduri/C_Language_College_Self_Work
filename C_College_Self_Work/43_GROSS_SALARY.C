#include<stdio.h>
#include<conio.h>
int main()
{
	float bs,ta,da,hra,pf,ga,tax;
	printf("Enter the value of Basic Salary: ");
	scanf("%f",&bs);
	ta=(bs*15)/100;
	da=(bs*20)/100;
	hra=(bs*12)/100;
	pf=(bs*18)/100;
	ga=(bs+ta+da+hra)-pf;
	printf("ta= %f\n",ta);
	printf("da= %f\n",da);
	printf("hra= %f\n",hra);
	printf("pf= %f\n",pf);
	printf("ga= %f\n",ga);
	
	if(ga>=90000)
	{
		tax=(ga*12)/100;
		printf("tax= %f",tax);
	}
	else if(ga>=70000)
	{
		tax=(ga*10)/100;
		printf("tax= %f",tax);
	}
	else if(ga>=50000)
	{
		tax=(ga*8)/100;
		printf("tax= %f",tax);
	}
	else if(ga>=30000)
	{
		tax=(ga*6)/100;
		printf("tax= %f",tax);
	}
	else if(ga>=15000)
	{
		tax=(ga*4)/100;
		printf("tax= %f",tax);	
	}
	else
	{
		printf("tax= NIL");
	}
	getch();
	return 0;
}