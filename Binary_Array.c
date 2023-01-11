#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int A[n];
for(i=0;i<n;++i)
{
    scanf("%d",&A[i]);
}
for(i=0;i<n;++i)
{
    if(A[i]==0 || A[i]==1)
    {
       c=c+1; 
    }
}
if(c==n)
printf("True");
else
printf("False");
}