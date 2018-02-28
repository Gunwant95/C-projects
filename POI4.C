#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int *p1=&a;
	int *p2=NULL;
	int *p3;
	clrscr();

	printf("\n %u\t%u\t%u",p1,p2,p3);
	getch();
}