#include<stdio.h>
main()
{
	int t=0,n,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		t=t+r;
		n=n/10;
	}
	printf("%d",t);
	
}
