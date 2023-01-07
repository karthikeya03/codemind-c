#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,num,sum=0,og;
        scanf("%d",&a);
        og=a;
        while(a!=0)
        {
            num=a%10;
            sum=sum*10+num;
            a=a/10;
        }
        if(sum==og)
        printf("True
");
        else
        printf("False
");
    }
}