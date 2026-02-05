#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c;
printf("Enter thre numbers to check the maximum number:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("1st numbers is Maximum number");
}
else if(b>a && b>c)
{
printf("2nd number is Maximum number");
}
else
{
printf("3rd number is Maximum numbers");
}
getch();
return 0;
}