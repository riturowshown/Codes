#include<stdio.h>
#include<conio.h>

void main()
{
	int array[50], element,i=0,k;

	printf("enter a element: (-1 to break)\n");
	scanf("%d",&element);

	while(element!=-1)
	{
		k=i-1;
		while(element<array[k]&& k>=0)
		{
			array[k+1]=array[k];
			k--;
		}
	array[k+1]=element;

	printf("after inserting:\n");
	for(int j=0;j<=i;j++)
	{
		printf(" %d ",array[j]);
	}

	printf("enter a value:(-1 to break)\n");
	scanf("%d",&element);
	i++;
	}


	printf("the sorted list is:\n");
	for(int j=0; j<i;j++)
	{
		printf(" %d  ",array[j]);
	}
}