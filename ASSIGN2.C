#include<stdio.h>

void swap(int*,int*);
void main()
{
	int a,b;
	printf("\nEnter two no");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("no is %d %d",a,b);
	getch();
}

void swap(int *x,int *y)
{
	int *z;
	*z=*x;
	*x=*y;
	*y=*z;
}