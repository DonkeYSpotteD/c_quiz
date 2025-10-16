#include<stdio.h>
int main ()
{
    int n;
    printf("hello world");
    while(scanf("%d",&n) != EOF)
    {
        if(n==1999)
        { 
        printf("Password is Right");
        break;
        }
        else
        {
        printf("wrong \n");
        }
    }

    return 0;
}