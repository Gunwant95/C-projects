#include<stdio.h>
#include<conio.h>

int main(int argc,char **argv)
{
	clrscr();
	printf("%d",argc);
	printf("\nFirst arg %s",argv[0]);
	printf("\nSecond arg %s",argv[1]);
	printf("\nThird arg %s",argv[2]);
	printf("\nFour arg %s",argv[3]);

	return 0;
}