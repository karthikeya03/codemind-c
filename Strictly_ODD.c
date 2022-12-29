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
    for(i=0;i<n;++i)
    {
        if(A[i]%2!=0)
        {
            if(i%2!=0)
            {
                c=0;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    if(c==0)
    printf("True");
    else
    printf("False");
}