#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq!=0)
    {
        num=sq%10;
        sum=sum+num;
        sq=sq/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}