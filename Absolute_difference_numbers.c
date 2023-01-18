#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d%d",&n,&a);
    b=pow((10),a);
    c=log10(n);
    d=pow((10),c-a+1);
    e=n/d;
    f=n%b;
    printf("%d",abs(f-e));
    
}