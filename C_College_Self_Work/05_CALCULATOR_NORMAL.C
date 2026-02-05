#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sum,sub,mul,div;
printf("Enter two numbers for calculation: ");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("Addition of two numbers=%d\n",sum);
printf("Substraction of two numbers=%d\n",sub);
printf("Multiplication of two numbers=%d\n",mul);
printf("Division of two numbers=%d",div);
getch();
return 0;
}