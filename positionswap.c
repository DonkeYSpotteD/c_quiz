#include<stdio.h>   
int main ()
{
        int i,j,n,pos,val;
        scanf("%d",&n);
        int arr[n+1];
        for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]); 
        }
        scanf("%d %d",&pos, &val);
        
        for(j=n;j>=pos;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[pos]=val;
         for(i=0;i<n+1;i++)
        {
            printf("%d  ",arr[i]);
        }
        return 0;
}