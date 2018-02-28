#include<stdio.h>
#include<conio.h>
int pow(int,int);
void main()
{
	int a,b,ans;
	clrscr();
	printf("\nEnter nos");
	scanf("%d%d",&a,&b);
	ans=pow(a,b);
	printf("\n%d",ans);
	getch();
}
int pow(int x,int y)
{

    if(y==1)
	return x;
    else
       return(x*pow(x,y-1));

}