#include<stdio.h>
int main()
{
    int n,a,b,i,c=0,sum=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;++i)
    {
        if(A[i]<a || A[i]>b)
        {
            c=1;
            if(A[i]>sum)
            {
                sum=A[i];
            }
        }
    }
    if(c==1)
    printf("%d",sum);
    else
    printf("-1");
}