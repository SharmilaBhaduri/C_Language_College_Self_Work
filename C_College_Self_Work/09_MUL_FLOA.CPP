#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float a,b,c,mul;
printf("Enter three numbers :");
scanf("%f%f%f",&a,&b,&c);
mul=a*b*c;
printf("multiplication of those numbers = %f",mul);
getch();
return 0;
}