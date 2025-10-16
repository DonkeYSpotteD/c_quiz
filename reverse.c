#include<stdio.h>
int main ()
{
    int temp,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=n-1;
    while(j>    i)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
} 