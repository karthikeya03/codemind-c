#include<stdio.h>
int main()
{
    int a,n,num,sum=0,c=0;
    scanf("%d",&n);
     a=n;
    while(n--)
    {
        int b,k,sum=0;
        scanf("%d",&b);
        k=b;
        while(b!=0)
        {
            num=b%10;
            sum=sum*10+num;
            b=b/10;
        }
        if(sum==k)
        {
            c++;
        }
    }
    if(c==a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}