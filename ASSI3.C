#include<stdio.h>
#include<conio.h>

void main()
{
	double a,b,c,determinant,root1,root2,real,img;
	printf("\n Enter coeff. a,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);

	determinant=b*b-4*a*c;

	if(determinant>0)
	{
		root1=(-b+sqrt(determinant))/(2*a);
		root2=(-b-sqrt(determinant))/(2*a);

		printf("\n root1=%.2lf and root2=%.2lf",root1,root2);
	}

	else if(determinant==0)
	{
		root1=root2=-b/(2*a);
		printf("\n Root1=root2=%.2lf",root1);
	}

	else
	{
		real=-b/(2*a);
		img=sqrt(-determinant)/(2*a);
		printf("root1=%.2lf+%.2lfi and root2=%.2f-%.2fi",real,img);
	}
}