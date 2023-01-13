#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n%10;
    b=n/10;
    c=a/5;
    if(a==0)
    {
        printf("%d",b);
    }
    else if(a==5 && a%5==0)
    {
        printf("%d",b+c);
    }
    else
    printf("-1");
}