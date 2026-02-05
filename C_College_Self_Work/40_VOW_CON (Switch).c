#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a Alphabate: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
			printf("THIS IS VOWEL");
		break;
		case 'a':
			printf("THIS IS VOWEL");
		break;
		case 'E':
			printf("THIS IS VOWEL");
		break;
		case 'e':
			printf("THIS IS VOWEL");
		break;
		case 'I':
			printf("THIS IS VOWEL");
		break;
		case 'i':
			printf("THIS IS VOWEL");
		break;
		case 'O':
			printf("THIS IS VOWEL");
		break;
		case 'o':
			printf("THIS IS VOWEL");
		break;
		case 'U':
			printf("THIS IS VOWEL");
		break;
		case 'u':
		 	printf("THIS IS VOWEL");
		break;
		default:
			printf("THIS IS CONSONENT");
	}
	getch();
	return 0;
}