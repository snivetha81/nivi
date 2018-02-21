#include<stdio.h>
main()
{
	char a[50],b[50];
	int m,n;
	scanf("%s%s",&a,&b);
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
}
