#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='A';
	clrscr();
	if(isalpha(ch))
		printf("\n Alphabet=%c",tolower(ch));
	else if(isspace(ch))
		printf("Space");
	else if(isupper(ch))
		printf("%d",tolower(ch));
		else
		printf("sorry");

       getch();
}