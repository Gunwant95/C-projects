#include<stdio.h>
#include<conio.h>
void f1(int w,int s);
//void f1(int* y,int* x);
void main()
{

	int a=2,b=3;
	int *p1,*p2;

	clrscr();
	p1=&a;
	p2=&b;
	f1(a,b);
	f1(&a,&b);
	getch();
}

void f1(int a,int b)
{
	printf("%d%d",a,b);
}

void f1(int *p1,int *p2)
{
	printf("%d%d",*p1,*p2);
}