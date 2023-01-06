#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
    scanf("%d %d",&w,&h);
        if(h<l || w<l)
        printf("UPLOAD ANOTHER
");
        else if(w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}