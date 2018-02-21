#include<stdio.h>
main()
{
	int n,i,a[100],k,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
               sum=sum+a[i];
	}
	k=sum/n;
	printf("%d",k);
}
