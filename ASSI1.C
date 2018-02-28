#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a no");
	scanf("%d%d",&a,&b);
	printf("%d%d",a,b);

	if(a>b)
		printf("A is greater");
	else
		printf("B is greater");
}