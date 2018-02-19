#include<stdio.h>
main()
{
	int t,i,j,a[10],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	
	}	printf("%d\n",a[n-1]);
		printf("%d\n",a[0]);
	
}
