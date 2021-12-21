#include<stdio.h>
#include<conio.h>

int main()
{
    int n,arr[10];
    printf("Number of Terms-> ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nX^%d := ",i);
        scanf("%d",&arr[i]);
    }
    int i=0;
    for(i=n-1;i>0;i--)
    {
        printf("%dX^%d+",arr[i],i);

    }
    printf("%d",arr[i]);
    return 0;
}