#include<stdio.h>
#include<conio.h>

void main()
{
	float pre_mon,pri_mon,bill,unit_cons,gst,tot;
	int ch;

	clrscr();
	printf("\n Enter present month data");
	scanf("%f",&pre_mon);

	printf("\n Enter previous month data");
	scanf("%f",&pri_mon);

	unit_cons=pre_mon-pri_mon;
	printf("\n Unit consumed=%f",unit_cons);

	printf("\n Enter 1 for domestic usage");
	printf("\n Enter 2 for commerial usage");

	printf("\n Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		if(unit_cons>0 && unit_cons<=50)
		{
			bill=(unit_cons-0.75);
			printf("\nBill=%f",bill);
			gst=bill*0.18;
			printf("\ngst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}
		else if(unit_cons>51 && unit_cons<=100)
		{
			bill=(unit_cons-1.5);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}

		else if(unit_cons>101 && unit_cons<=200)
		{
			bill=(unit_cons-2.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}
		else if(unit_cons>200)
		{
			bill=(unit_cons-4.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}
		else
			printf("\n Invalid Input");

		break;

		case 2:
		if(unit_cons>0 && unit_cons<=100)
		{
			bill=(unit_cons-2.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}
		else if(unit_cons>101 && unit_cons<=300)
		{
			bill=(unit_cons-3.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}

		else if(unit_cons>301 && unit_cons<=500)
		{
			bill=(unit_cons-5.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}

		else if(unit_cons>500)
		{
			bill=(unit_cons-8.0);
			printf("Bill=%f",bill);
			gst=bill*0.18;
			printf("gst=%f",gst);
			tot=gst+bill;
			printf("\n Total amount is=%f",tot);
		}
		else
			printf("\n Error");
		break;

		default:
		printf("\n Invalid input");
	}
	getch();
}
