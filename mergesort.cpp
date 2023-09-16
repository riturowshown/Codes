#include<stdio.h>
#include<conio.h>

void mergesort(int a[],int left, int right);
void merge(int a[],int mergehalf, int mergeleft, int mergerightright);
void main()
{
int a[50],i,n;
printf("enter how many elements:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter valu:\n");
	scanf("%d",&a[i]);

}

mergesort(a,0,n-1);

printf("the sorted list is:\n");

for(i=0;i<n;i++)
{
	printf(" %d  ",a[i]);
	
}

}

void mergesort(int a[],int left, int right)
{
int half;
if(left==right)
    return ;
	

	half=(int)(left+right)/2;
	mergesort(a,left,half);
	mergesort(a,half+1,right);
	merge(a,half,left,right);



}

void merge(int a[],int mergehalf, int mergeleft, int mergeright)
{
	int temparray[50],newindex,newrightindex,starting,ending;
	starting=mergeleft;
	ending=mergeright;
	newindex=mergeleft;
	newrightindex=mergehalf+1;
	
	while((mergeleft<=mergehalf) &&(newrightindex<=mergeright))

	{
		if(a[mergeleft]<=a[newrightindex])
		{
			temparray[newindex]=a[mergeleft];
			mergeleft+=1;
		}
		else
		{
			temparray[newindex]=a[newrightindex];
			newrightindex+=1;
		}
		newindex+=1;
	}
//rest if left or right has extra element
	if(mergeleft<=mergehalf)
	{
		while(mergeleft<=mergehalf)
		{
			temparray[newindex]=a[mergeleft];
			mergeleft+=1;
			newindex+=1;
		}

		}

	else
	{
		while(newrightindex<=mergeright)
		{
			temparray[newindex]=a[newrightindex];
			newrightindex+=1;
			newindex+=1;
		}
	
	}

	for(int i=starting;i<=ending;i++)
	{
		a[i]=temparray[i];
	}
	//return;
}