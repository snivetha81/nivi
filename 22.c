#include <stdio.h>

int main()
{
int i,r,max,a[10];
scanf("%d",&r);
for(i=0;i<r;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<r;i++)

if(max<a[i])
max=a[i];
{
 printf("%d",max);
}
return 0;
}
