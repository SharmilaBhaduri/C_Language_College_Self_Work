#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter three numbers to check the miniumum number:");
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
