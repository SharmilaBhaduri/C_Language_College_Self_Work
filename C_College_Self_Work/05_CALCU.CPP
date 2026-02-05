#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c,d,sum,sub,mul;
printf("Enter 4 numbers for calculate=");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=a+b+c+d;
sub=a-b-c-d;
mul=a*b*c*d;
printf("Additon between 4 number=%d\n",sum);
printf("Substraction between 4 number=%d\n",sub);
printf("Multiplication between 4 number=%d\n",mul);
int p,q,div;
printf("Enter two numbers for division=");
scanf("%d%d",&p,&q);
div=p/q;
printf("divisionn between two numbers=%d",div);
getch();
return 0;
}