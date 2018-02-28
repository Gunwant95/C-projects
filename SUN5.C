#include<stdio.h>

void main()
{
	int rev,no,rem,n;

	clrscr();

	printf("\n Enter no");
	scanf("%d",&no);

	n=no;

	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}

	if(n==rev)
	{
		printf("\n No is palindrome");
	}
	else
	{
		printf("\n No is not palindrome");
	}
getch();
}