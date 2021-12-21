#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],n,i;
    printf("\nEnter Numbers of element in Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Element[%d]",i+1);
        scanf("%d",&arr[i]);
        
    }

    int max1=0,max2=0;

    for(int i=0;i<n;i++)
    {
        if(max1<=arr[i])
        {
            max1=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max2<=arr[i] && arr[i]!=max1)
        {
            max2=arr[i];
        }
    }

    printf("\nTwo largest pair of Array := %d",max1+max2);
}