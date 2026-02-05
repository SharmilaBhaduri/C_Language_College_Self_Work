#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter two numbers to check the Maximum number:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is Maximum number",a);
}
if(b>a)
{
printf("%d is Maximum number",b);
}
getch();
return 0;
}

