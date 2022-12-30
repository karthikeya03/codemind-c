#include<stdio.h>
int main()
{
    int n,num,sum=0,pro=1;
    scanf("%d",&n);
    for(;n>0;)
    {
        num=n%10;
        sum=sum+num;
        pro=pro*num;
        n=n/10;
    }
    if(sum==pro)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}