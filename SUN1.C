#include<stdio.h>

void main()
{
	int n,no,sum=0,rem=0;
	clrscr();
	printf("Enter no:");
	scanf("%d",&no);
	n=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}

	if(n==sum)
	{
		printf("\n Armstrong no");
	}
	else
	{
		printf("not Armstrong");
	}
getch();
}
