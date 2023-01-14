#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;++i)
    {
        printf("%d ",i);
        for(j=i+1;j<=n;++j)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}