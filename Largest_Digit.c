#include<stdio.h>
int main()
{
    int n,num=0,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        if(num>sum)
        {
            sum=num;
        }
        n=n/10;
    }
    printf("%d",sum);
}