#include<stdio.h>
#include<conio.h>
#define size 50

void main()
{
int n,temp;
int array[size];
printf("enter number of elements:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	printf("enter value: \n");
	scanf("%d",&array[i]);
}

for(i=0;i<n;i++)
{
	for(int j=0;j<n-1-i;j++)
	{
		if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
}

printf("the sorted array is:\n");

for(i=0;i<n;i++)
{
	printf(" %d  ",array[i]);
}
}