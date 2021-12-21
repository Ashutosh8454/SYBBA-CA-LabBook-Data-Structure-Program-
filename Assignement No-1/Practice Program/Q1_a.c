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

    int sumofeven=0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumofeven+=arr[i];
        }
    }
  printf("Sum of even subscript is %d ",sumofeven);

}