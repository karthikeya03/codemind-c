#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000];
   int i,c=0;
   scanf("%s",a);
   for(i=0; a[i]!=NULL;i++)
   {
       if(a[i]>='0' && a[i]<='9')
       c++;
   }
   if(c==0)
   printf("Doesn't contain digit");
   else
   printf("Contains %d digit",c);
}
