#include<stdio.h>
#include<conio.h>
int minimum(int array[],int index,int len);
int maximum(int array[],int index,int len);
int main()
{
	int arr[100],n,max,min;
	int i;
	clrscr();
	printf("\n Enter size of array");
	scanf("\n%d",&n);

	printf("\n Enter %d ele. in an array",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	max=maximum(arr,0,n);
	min=minimum(arr,0,n);
	printf("\n Minimum ele. in array=%d",min);
	printf("\n Maximum ele. in array=%d",max);
	getch();
	return 0;
}

int maximum(int arr[],int index,int len)
{
	int max;
	if(index>=len-2)
	{
		if(arr[index]>arr[index+1])
			return arr[index];
		else
			return arr[index+1];
	}

	max=maximum(arr,index+1,len);

	if(arr[index]>max)
		return arr[index];
	else
		return max;
}

int minimum(int arr[],int index,int len)
{
	int min;
	if(index>=len-2)
	{
		if(arr[index]<arr[index+1])
			return arr[index];
		else
			return arr[index+1];
	}

	min=minimum(arr,index+1,len);
	if(arr[index]<min)
		return arr[index];
	else
		return min;
}
