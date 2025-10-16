#include<stdio.h>
int main ()
{
    int n,even=0,odd=0,pos=0,neg=0;
    
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
        even++;
        }
        if(arr[j]%2!=0)
        {
            odd++;
        }
        if(arr[j]>0)
        {
            pos++;
        }
        else 
        {
            neg++;
        }
    }    
    printf("Even-%d \n Odd-%d \n pos- %d neg= %d ",even,odd,pos,neg);
    return 0;
}