#include<stdio.h>

void main()
{
	int i,n,no;
	clrscr();
	printf("\nEnter no");
	scanf("%d",&no);
	n=no;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			printf("\n No is NOT prime");
			break;
		}

	}

	if(n==i)
	{
		printf("\n No is prime");
	}

getch();
}