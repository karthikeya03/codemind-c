#include<stdio.h>
int main()
{
	int i,j,n;
	char t;
	scanf("%d",&n);
	for(i=1,t='A';i<=n;i++,t++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c ",t);
	    }
		printf("
");
	}
}