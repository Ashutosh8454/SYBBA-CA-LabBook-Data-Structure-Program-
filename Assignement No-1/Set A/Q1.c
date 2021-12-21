#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],x,n;
    int count=0;

    printf("\nEnter Array Size : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Element[%d]",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter Number to  Found frequency : ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
             count =count+1;
        }
    }

    printf("Number of occurrences : = %d",count);

}