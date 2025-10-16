#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    printf("Negtive");
    else if(n>0) 
    printf("Positive");
    else
    printf("zero");

    return 0;
}