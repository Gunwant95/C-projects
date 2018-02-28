#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("\t%d",sizeof(char));
	printf("\t%d",sizeof(int));
	printf("\t%d",sizeof(float));

	printf("\t%d",sizeof(char*));
	printf("\t%d",sizeof(int*));
	printf("\t%d",sizeof(float*));
	getch();
}

