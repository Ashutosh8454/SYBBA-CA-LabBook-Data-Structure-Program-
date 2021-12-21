#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],x,n;
    int arrsq[10];
    int count=0;

    printf("\nEnter Array Size : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Element[%d]",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arrsq[i]=arr[i]*arr[i];
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d array square => %d",arr[i],arrsq[i]);
    }
}