
#include <stdio.h>
int main(void) {
	int a,b,n,i,c=0;
	scanf("%d%d",&a,&b);
	n=a*b;
	for(i=0;i<n;i++)
	{
	if(n==(i*i))
	{
		c++;
		
	}
	}
	if(c>0)
	{
	    printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
