#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,avg;
printf("Enter three numbers to average : ");
scanf("%f%f%f",&a,&b,&c);
avg=(a+b+c)/3;
printf("Average between those numbers : %f",avg);
getch();
return 0;
}