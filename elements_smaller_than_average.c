#include<stdio.h>
int main()
{
    int n,i,c=0,sum=0,avg;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+A[i];
    }
     avg=sum/n;
    for(i=0;i<n;++i)
    {
        if(avg>=A[i])
        c=c+1;
    }
    printf("%d",c);
}