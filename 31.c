#include<stdio.h>
int main()
{
	int i,c=0;
	char a[100];
	for(i=0;i<=50;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=a[i];i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
		c++;
	}}
	printf("%d",c);
	return 0;
}
