#include<stdio.h>
int main()
{
    int s,t,b;
    int cap,kb;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512;
    kb=cap/1024;
    printf("%d KB",kb);
}