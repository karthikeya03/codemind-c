#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n=0;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    e=a/d;
    f=a%d;
    if(f!=0)
    {
        n=e+1;
        printf("%d",n);
    }
    else
    printf("%d",e);
    
}