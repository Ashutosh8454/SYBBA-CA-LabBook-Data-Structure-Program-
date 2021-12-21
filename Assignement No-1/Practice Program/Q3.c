#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],n,i;
    float median=0;
    printf("\nEnter Numbers of element in Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter sorted array Element[%d]",i+1);
        scanf("%d",&arr[i]);
        
    }

    
        if(n%2==0)
        {
            int n1=(n/2)-1;// becouse arr index start with 0
            int n2=n/2;
            median=(arr[n1]+arr[n2]);
            median=median/2;
          
        }
        else{
                int n1=n/2+1; // becouse arr index start with 0
                median=arr[n1-1];
        }
    printf("Median of Array := %0.2f",median);
}