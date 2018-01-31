#include<stdio.h>
main()
{
	int a,b,t;
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	t=a;
	a=b;
	b=t;
printf("%d%d\n",a,b);
}
