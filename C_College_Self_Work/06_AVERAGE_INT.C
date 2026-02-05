#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,avg;
printf("Enter four nmbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
avg=(a+b+c+d)/4;
printf("Average between four numbers = %d",avg);
getch();
return 0;
}