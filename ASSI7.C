#include<stdio.h>
#include<conio.h>
void main()
{
	extern int a;
	int e;
	register int d=10;
	a=10;
	clrscr();
	printf("%d",d);
	e=d;
	printf("\n %d ",e);
	printf("\nFirst time %d",a);
	f1();
	printf("\n second time %d",a);
	f1();
	printf("\n%d",a);

}
int a;
f1()
{
	static int c=0;
	c=c+1;
	printf("\n %d",c);
	a=a+1;
	printf("\n %d",a);
}

