#include<stdio.h>
#include<conio.h>

void main()
{

	int a,*p,**c;
	clrscr();
	a=10;
	p=&a;
	c=&p;

	printf("%d",a);
	printf("%d",*p);
	printf("%d",**c);
	getch();
}