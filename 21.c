#include <stdio.h>

int main()
{
int n,k,di,sum=0,temp,i;
scanf("%d%d%d",&n,&k,&di);
for(i=0;i<n;i++)
{
	temp=sum+k;
	sum=temp;
	k=k+di;
}
	
	printf("%d",temp);
	

	
	return 0;
}
