#include<stdio.h>
#include<string.h>
char* ToLowerCase(char* a)
{
    int len=strlen(a);
    for(int i=0;i<len;++i)
    {
       if(a[i]>='A'&&a[i]<='Z')
       {
           a[i]=a[i]+32;
       }
    }
    return a;
}
int main()
{
    char a[100];
    scanf("%s",a);
    char* x=ToLowerCase(a);
    printf("%s",x);
}