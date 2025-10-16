#include<stdio.h>   
int main ()
{
    int  sum,n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i <n; i++)

    {
        scanf("%d",&array[i]);
    }
    for ( int i = 0; i < n; i++)
    {
     sum+=array[i];
    }
    printf("%d",sum);
    
    return 0;
}
