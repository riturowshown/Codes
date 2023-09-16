#include<stdio.h>
#include<conio.h>
void heapsort(int a[],int n);
void createheap(int a[],int n);
void main()
{
	int n,i,a[50];
printf("enter number of elements:\n");

scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("enter values:\n");
	scanf("%d",&a[i]);
}
 createheap(a,n);
heapsort(a,n);
 printf("the sorted list is:\n");
for(i=1;i<=n;i++)
{
	
	printf(" %d",a[i]);
}
}

void createheap(int a[],int n)
{
int big,i,j,k;
//big=a[1];
//i=;
//j=i*2;

for(k=2;k<=n;k++)
{    
	big=a[k];
	i=k;
	j=(int)i/2;
	while(j>=1 && a[j]<big)
	{
		a[i]=a[j];
		i=j;
		j=(int)i/2;
	
	}
    a[i]=big;
}

}

void heapsort(int a[],int n)
{
int k,i,j,small,temp;
for(k=n;k>=2;k--)
{
temp=a[k];
a[k]=a[1];
a[1]=temp;
i=1;
j=2;
small=a[1];

if(j+1<k)
{
	if(a[j+1]>a[j])
	{
		j+=1;
	}
}
	while(j<k && a[j]>small)
	{
		a[i]=a[j];
		i=j;
		j=i*2;
		if(j+1<k)
		{
			if(a[j+1]>a[j])
			{
				j+=1;
			}
		}
	 a[i]=small;
	}

}
}