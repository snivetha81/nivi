#include<stdio.h>
int main()
{
char a[20];
int i,c1=0,c2=0,c;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') )
{
c1++;
}
else if(a[i]>='0' && a[i]<='9')	
{
c2++;
}
}
if((c1>0) && (c2>0))
  printf("yes");
  else
    printf("no");
return 0;
}
