#include<stdio.h>
int main()
{
    int t1=0,t2=1;
    int a;
    int n;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    a=t1+t2;
    
    for(int i=3;i<=n;++i)
    {
        printf("%d ",a);
        t1=t2;
        t2=a;
        a=t1+t2;
    }
    
}