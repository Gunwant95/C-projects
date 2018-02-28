#include<stdio.h>
#include<conio.h>
void main()
{
	char a1[]="Rama";
	char a2[]="Sita";
	clrscr();
	printf("\n Strings are %s\t%s",a1,a2);
	printf("\n string compare %d",strcmp(a1,a2));
	printf("\n string copy %s",strcpy(a1,a2));
	printf("\n string concate %s",strcat(a1,a2));
	printf("\n string rev %s",strrev(a1));
	printf("\n string length %d",strlen(a2));
	getch();
}