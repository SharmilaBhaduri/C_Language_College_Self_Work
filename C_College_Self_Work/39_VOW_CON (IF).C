#include<stdio.h>
#include<conio.h>
int main()
{
	char al; 
	printf("Enter a Alphabate: ");
	scanf("%c",&al);
	if(al=='A'||al=='a'||al=='E'||al=='e'||al=='I'||al=='i'||al=='O'||al=='o'||al=='U'||al=='u')
	{
		printf("The Alphabate is a Vowel");
	}
	else
	{
		printf("The Alphabate is a Consonent");
	}
	getch();
	return 0;
}