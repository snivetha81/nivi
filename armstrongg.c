#include<stdio.h>
int main()
{
	int n,t,rem,result=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		result=result+rem*rem*rem;
		n=n/10;
	}
	if(t==result)
	{
		printf("yes",n);
	}
	else
	{
		printf("no",n);
	}
	return 0;
}
	
