#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float avg;
    avg=(a+b)/2;
    printf("Average of %.f and %.f is: %.2f",a,b,avg);
}