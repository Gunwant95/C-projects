#include<stdio.h>

void main()
{
	int a=10,b=20,*p1,*p2;
	clrscr();
	p1=&a;
	p2=&b;
	printf("\n%d",*p1+*p2);
	printf("\n%d",*p2-*p1);
	printf("\n%d",*p2*(*p1));
	printf("\n%d",*p2/(*p1));
	printf("\n%d",*p1+20);
	printf("\n%d",a);
	printf("\n%d",*p1-20);
	printf("\n%d",a);
	printf("\n%d",*p1*2);
	printf("\n%d",*p1/2);
	printf("\n%d",*p1>1);
	printf("\n%d",*p1<1);
	printf("\n%d",*p1==*p2);
	getch();
}