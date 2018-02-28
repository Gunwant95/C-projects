#include<stdio.h>
#include<conio.h>
void main()
{
	float fah,cel;
	clrscr();
	printf("\n Enter temperature in fahrenheit");
	scanf("%f",&fah);
	cel=(fah-32)/1.8;
	printf("\n temp. in celcius is=%f",cel);

	printf("\n Enter temp. in celsius");
	scanf("%f",cel);
	fah=(cel*1.8)+32;
	printf("%f",fah);
	getch();

}