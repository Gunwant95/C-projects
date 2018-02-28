#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[25]={" "};
	char c[25]={'\0'};
		int i,flag=0,cnt=0;

	clrscr();

	printf("\n Enter string");
	scanf("%s",ch);

	printf("%s",ch);

	for(i=0;ch[i]!='\0';i++)
	{
		cnt++;
	}

       /*	cnt=strlen(ch);

	for(i=0;i<cnt;i++)
	{
		c[i]=ch[i];
	}
	*/
	printf("\nString length is =%d",cnt);

	for(i=cnt-1;i>=0;i--)
	{
		c[cnt-i-1]=ch[i];
	}

	for(flag=1,i=0;i<cnt;i++)
	{
		if(c[i]!=ch[i])
			flag=0;
	}

	if(flag==1)
	{
	       printf("\nString is palindrome %s",ch);
	}
	else
	{
		printf("\nString is not palindrome %s",ch);
	}
	getch();
}