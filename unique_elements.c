#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
    scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(A[i]==A[j])
            {
                for(k=j;k<n;++k)
                {
                    A[k]=A[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
}