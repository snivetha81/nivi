#include<stdio.h>
int main()
{
int i,f,l;
scanf("%d",&f);
scanf("%d",&l);
for(i=f+1;i<l;i++)
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
return 0;
}
