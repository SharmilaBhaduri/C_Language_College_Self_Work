#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter two numbers to check the Minimum number:");
scanf("%d%d",&a,&b);
if(a<b)
{
printf("%d is Minimum number",a);
}
if(b<a)
{
printf("%d is Minimum number",b);
}
getch();
return 0;
}
