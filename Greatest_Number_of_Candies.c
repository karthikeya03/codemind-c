#include<stdio.h>
int main()
{
    int n,m,i,j,max,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;++i)
    {
        int c=a[i]+m;
        if(c>=max)
        printf("True ");
        else
        printf("False ");
    }
}