#include<stdio.h>
int main()
{
    int n,k,x,y,total;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int red=k*x;
    int blue1=(n-k)*x;
    int blue2=(n-k)*y;
    total=(blue1<blue2)? blue1:blue2;
    printf("%d",red+total);
}