#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];  
    int i,c=0;
    scanf("%[^
]c",s);
     
    for(i=0;s[i];i++)  
    {
    	if(s[i]==32)
    	 c++;
 
 	}
 	if(i>0)
 	 c++;
 	
    printf("%d
",c);
    
    return 0;
}