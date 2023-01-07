#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,i;
    for(i=1;i<n;++i)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>=n)
    printf("True");
    else
    printf("False");
}