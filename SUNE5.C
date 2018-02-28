#include<stdio.h>
#include<conio.h>

void swap(int*,int*);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter no");
	scanf("%d%d",&a,&b);
	printf("%d\t%d",a,b);
	swap(&a,&b);
	printf("\nNo are %d\t%d",a,b);

	getch();
}

void swap(int *x,int *y)
{
	int *z;
	*z=*x;
	*x=*y;
	*y=*z;
	//printf("\n No are changed %d\t%d",x,y);
}