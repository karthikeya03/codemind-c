#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,x,y;
        scanf("%d %d",&a,&b);
        x=a*5;
        y=b*7;
        printf("%d
",x+y);
    }
}