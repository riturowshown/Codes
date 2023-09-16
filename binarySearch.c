#include<stdio.h>

int main()
{
    int a[]={3,6,8,11,16,20,30},n,start,end,mid;
    printf("Enter a value to search: ");
    scanf("%d",&n);
    start=0;end=6;
    mid=(int)(start+end)/2;

    while(start<=end && a[mid]!=n)
    {
        if(n<a[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=(int)(start+end)/2;
    }
    if(a[mid]==n)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot Found\n");
    }
    return 0;
}
