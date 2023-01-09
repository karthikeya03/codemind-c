#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        if(A[i]%2==0)
        a=a+1;
        else
        b=b+1;
    }
    printf("%d %d",a,b);
}