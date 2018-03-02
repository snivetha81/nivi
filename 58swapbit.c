#include<stdio.h>
main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t%d\t",a,b);
}
