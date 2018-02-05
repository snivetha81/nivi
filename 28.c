#include<stdio.h>
main()
{
	int a[4],i;
	for(i=0;i<3;i++)
	{
		scanf("%d\t",&a[i]);
		
	}
	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
		printf("%d\n",i);
	}
}
