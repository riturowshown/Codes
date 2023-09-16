#include<stdio.h>
#include<conio.h>

void quicksort(int array[],int left, int right);

void main()

{
	int array[50],n,left,right,i;

	printf("enter number of elements:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter values:\n");
		scanf("%d",&array[i]);
	}


	left=0;
	right=n-1;

	quicksort(array,left,right);

	printf("after sorting:\n");

	for(i=0;i<n;i++)
	{
		printf(" %d  ",array[i]);
	}
}

void quicksort(int array[], int left, int right)

{

int flag=false,i=0,j=0,temp=0,partition;

if(right>left)
{
	i=left;
	j=right;
	partition=array[left];
	flag=false;
	while(!flag)
	{
		while((array[i]<=partition) && (i<=right))
		{
			i++;
		}

		while((array[j]>=partition) && (j>left))
		{
			j--;
		}

		if(j<i)
		{
			flag=true;
		}
		else
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}

	}
	temp=array[left];
	array[left]=array[j];
	array[j]=temp;



quicksort(array,left,j-1);
quicksort(array,i,right);
}
return;
}