#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,i,n,c=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;++i)
        {
            n=i%10;
            if(n==2||n==3||n==9)
            {
               c=c+1; 
            }
        }
        printf("%d
",c);
    }
}