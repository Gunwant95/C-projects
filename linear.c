#include<stdio.h>
#include<conio.h>

int main()
{
		int a[10];
		int i=0,s,n,count=0;
		
		printf("\n Enter no of elements ");
		scanf("%d",n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnter no to search");
		scanf("%d",&s);
		
		for(i=0;i<n;i++)
		{
			if(a[i]==s)
			{
				count++;
				printf("\n No is %d",a[i]);
				break;
			}
		}
		
		if(count==0)
		{
			printf("\n No  is not present ");
		}
return 0;
}
