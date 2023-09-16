#include<stdio.h>
#include<conio.h>

void main()
{
int array[50],i=0,k=0,j,minvalue,n;

printf("enter number of elements:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&array[i]);
}

for(i=0;i<n-1;i++)
{
	minvalue=i;
	for(j=i+1;j<n;j++)
	{
		if(array[j]<array[minvalue])
		minvalue=j;
	}

	if(minvalue!=i)
	{
		k=array[minvalue];
		array[minvalue]=array[i];
		array[i]=k;
	}
}
printf("sorted list is:\n");
for(i=0;i<n;i++)
{
	printf(" %d  ",array[i]);
}
}