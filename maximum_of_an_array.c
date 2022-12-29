#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=1;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<n;++i)
    {
        if(A[0]<A[i])
        A[0]=A[i];
    }
    printf("%d",A[0]);
}