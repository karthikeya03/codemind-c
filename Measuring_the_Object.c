#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    if(n==(a+b)||n==(b+c)||n==(a+c)||n==a||n==b||n==c||n==(a+b+c))
    printf("YES");
    else
    printf("NO");
}