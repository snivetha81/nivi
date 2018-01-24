#include <stdio.h>

int main()
{
int i,r,min,a[10];
scanf("%d",&r);
for(i=0;i<r;i++)
{
	scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<r;i++)

if(min>a[i])
min=a[i];
{
 printf("%d",min);
}
return 0;
}
