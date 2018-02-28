#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	long int ans;
	long fact(int);

	printf("\n Enter no");
	scanf("%d",&no);

	ans=fact(no);

	printf("\n Factorial of %d is %ld",no,ans);
	getch();
}
long fact(n)
{
	if(n>0)
		return (n*fact(n-1));
	else
		return(1);
}
