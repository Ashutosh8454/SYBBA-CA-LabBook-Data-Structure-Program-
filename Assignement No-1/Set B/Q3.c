#include<stdio.h>
#include<conio.h>

void Poly_accept(int n,int arr[])
{ 
    printf("\nEnter Element In Polynomial");
     for(int i=0;i<n;i++)
    {
        printf("\nX^%d := ",i);
        scanf("%d",&arr[i]);
    }
}

void Poly_display(int n,int arr[])
{
    int i=0;
    for(i=n-1;i>0;i--)
    {
        printf("%dX^%d+",arr[i],i);

    }
    printf("%d",arr[i]);
}

void Poly_add(int n1,int n2,int arr1[],int arr2[])
{
    int maxn=(n1>n2)?n1:n2;
    
    int arr[10]={0};

    for(int i=0;i<maxn;i++)
    {
        arr[i]=arr1[i]+arr2[i];
    }
    Poly_display(maxn,arr);
    
}

int main()
{
    int n1,n2,arr1[10]={0},arr2[10]={0};
    printf("\nEnter Array One Size : ");
    scanf("%d",&n1);
    Poly_accept(n1,arr1);
    printf("\nFirst Polynomial : ");
    Poly_display(n1,arr1);
    printf("Enter Array Two Size : ");
    scanf("%d",&n2);
    Poly_accept(n2,arr2);
    printf("\nFirst Polynomial : ");
    Poly_display(n2,arr2);

printf("\nAddition Of Polynomial :=");
    Poly_add(n1,n2,arr1,arr2);

}