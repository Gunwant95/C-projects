#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	float b=12.35;
	void *p;
	clrscr();
	printf("%u",p);
	p=&a;
	printf("\n%u",p);
	printf("\n%d",*(int*)p);
	p=&b;
	printf("\n%f",*(float*)p);
}
