#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,c=0;
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
     if(A[i]==avg)
        {
        c=c+1;
        break;
        }
}
    if(c==1)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
}