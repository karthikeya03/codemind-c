#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float charge,sc,bill;
    if(n<200)
    {
        bill=1.20*n;
    }
    else if(n>=200 && n<400)
    {
        bill=1.50*n;
    }
    else if(n>=400 && n<600)
    {
        bill=1.80*n;
    }
    else if(n>=600)
    {
        bill=2.00*n;
    }
    
    if(bill>=400)
    {
        sc=0.15*bill;
    }
    else
    {
        sc=100;
    }
    charge=sc+bill;
    printf("%.2f",charge);
    
}