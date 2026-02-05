#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c;
printf("Enter thre numbers to check the minumum number:");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
{
printf("1st numbers is Minimum number");
}
else if(b<a && b<c)
{
printf("2nd number is Minimum number");
}
else
{
printf("3rd number is Minimum numbers");
}
getch();
return 0;
}