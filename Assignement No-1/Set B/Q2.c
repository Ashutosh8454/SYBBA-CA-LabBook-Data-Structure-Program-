#include<stdio.h>
#include<conio.h>
 

int main()
{
    int n,arr[10],find,rep;

    printf("\nEnter NUmber of Element ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Element[%d]",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter number To find position ");
    scanf("%d",&find);
    printf("\n Replace Element ");
    scanf("%d",&rep);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            arr[i]=rep;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("\nElement [%d] =>%d",i+1,arr[i]);
    }
    return 0;
}