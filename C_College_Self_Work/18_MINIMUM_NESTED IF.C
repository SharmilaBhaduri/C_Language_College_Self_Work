#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter three numbers to check Minimum number:");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
{
printf("%d is Minimum number",a);
}
}
if(b<a)
{
if(b<c)
{
printf("%d is minimum number",b);
}
}
if(c<a)
{
if(c<b)
{
printf("%d is Minimum number",c);
}
}
getch();
return 0;
}