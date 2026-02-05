   #include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c,mul;
printf("Enter thre numbers for multiplication=");
scanf("%d%d%d",&a,&b,&c);
mul=a*b*c;
printf("multiplication between three numbers=%d",mul);
getch();
return 0;
}