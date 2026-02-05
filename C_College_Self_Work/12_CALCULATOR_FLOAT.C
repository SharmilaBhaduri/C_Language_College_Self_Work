#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,sum,sub,mul,div;
printf("Enter two numbers for calculatiopn : ");
scanf("%f%f",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("Addition between those numbers : %f\n",sum);
printf("Substraction between those numbers : %f\n",sub);
printf("Multiplication between those numbers : %f\n",mul);
printf("Division between those numbers : %f",div);
getch();
return 0;
}
