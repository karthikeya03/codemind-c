#include<stdio.h>
int main()
{
    int n;
    char t;
    scanf("%d",&n);
    int i,j;
    for(i=n,t=(64+i);i>=1;--i,--t)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c ",t);
        } 
        printf("
");
    }
}