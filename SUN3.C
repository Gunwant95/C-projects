#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,no1,no2,cnt=0,temp,flag;
	clrscr();
	printf("\nEnter two no starting from 2");
	scanf("%d%d",&no1,&no2);

	if(no2<2)
	{
		printf("\n There is no prime no %d",no2);
		exit(0);
	}

	printf("\nPrime no are");
	temp=no1;

	if(no1%2==0)
	{
		no1++;
	}

	for(i=no1;i<=no2;i=i+2)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if((i%j)==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("\n %d",i);
			cnt++;
		}
	}
	printf("\n No of primes between %d and %d=%d",temp,no2,cnt);
getch();
}