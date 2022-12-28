#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b>a)
        printf("PROFIT
");
        else if(a==b)
        printf("NEUTRAL
");
        else if(b<a)
        printf("LOSS
");
    }
}