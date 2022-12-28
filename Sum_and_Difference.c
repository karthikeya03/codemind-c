#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d
",a+b,a-b);
    float c,d;
    scanf("%f %f",&c,&d);
    printf("%.1f %.1f",c+d,c-d);
}