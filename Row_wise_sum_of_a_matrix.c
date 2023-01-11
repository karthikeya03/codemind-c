#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d%d",&a,&b);
    int A[a][b];
    for(i=0;i<a;++i)
    {
        for(j=0;j<b;++j)
        {
        scanf("%d",&A[i][j]);
        }
    }
       
       for(i=0;i<a;++i)
    {
        sum=0;
        for(j=0;j<b;++j)
        {
        sum=sum+A[i][j];
        }
        printf("%d ",sum);
    }
}