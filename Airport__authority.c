#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    int w;
    scanf("%d",&w);
    for(i=0;i<n;++i)
    {
        if(A[i]<=w)
        {
            c=c+1;
        }
        else if(A[i]>w)
        {
            c=c+2;
        }
        else
        {
            c=c+0;
        }
    }
    printf("%d",c);
}