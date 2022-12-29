#include<stdio.h>
int main()
{
    int n,i,a,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;++i)
    {
        if(A[i]==a)
        c=c+1;
    }
    if(c)
    printf("True");
    else
    printf("False");
}