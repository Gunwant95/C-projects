#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,no,tno=0,fno=0,sno=1;

	printf("Enter no of elements");
	scanf("%d",&no);

	printf("%d%d",fno,sno);

	while(i<=no)
	{
		tno=fno+sno;
		printf("\t%d",tno);
		fno=sno;
		sno=tno;
		i++;
	}
	getch();
}