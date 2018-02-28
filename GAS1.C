#include<stdio.h>
void main()
{
	int i,no=5,k,j;
	printf("\n");
	for(i=1;i<=no;i++)
	{
		for(k=no-i;k>=1;k--)
		{
			printf(" ");

			for(j=i;j>=1;j--)
			{
				printf("%d",j);
			}
			//printf("\n");
		 }
			for(j=1;j<i;j++)
			{
				printf("%d",j);
			}
		printf("\n");
	}
}