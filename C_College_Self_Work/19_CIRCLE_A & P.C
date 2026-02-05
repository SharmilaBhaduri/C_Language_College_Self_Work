#include<stdio.h>
#include<conio.h>
int main()
{
	float r,area,peri;
	printf("Enter the Radius of any Circle : ");
	scanf("%f",&r);
	area=(22*r*r)/7;
	peri=(2*22*r)/7;
	printf("Area of this Circle is = %f\n",area);
	printf("Perimeter of this Circle is = %f",peri);
	getch();
	return 0;
}