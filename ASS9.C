#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[]="ramA";
	int i=0,n;
	clrscr();
	while(ch[i]!='\0')
	{
		i++;
	}
	n=i;
	for(i=n-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}