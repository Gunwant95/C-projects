#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter a no.");
	scanf("%d",&a);
	printf("%d",a);

	if(a%2==0)
	{
		printf("No is even");
	}
	else
		printf("No is odd");
	getch();
}