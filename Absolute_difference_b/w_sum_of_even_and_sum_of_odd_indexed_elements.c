#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        if(i%2==0)
        {
            sum1=sum1+A[i];
        }
        if(i%2!=0)
        {
            sum2=sum2+A[i];
        }
    }
    printf("%d",sum1-sum2);
}