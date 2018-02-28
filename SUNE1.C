#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20;
	int b=30;
	float c=3.4;
	float d=2.3;
	clrscr();
	printf("\n%d\t%d",a,b);
	printf("\n%d",a+b);
	printf("\n%d",a-b);
	printf("\n%d",a*b);
	printf("\n%d",a/b);
	printf("\n%f",a/c);
	printf("\n%f",c/d);
	printf("\n%f",c/a);
	printf("\n%f",c%a);
	printf("\n%f",c%d);
	getch();
}