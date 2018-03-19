#include<stdio.h>
int main()
{
int n,i,m;
printf("Enter the number\n");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
  n=n/10;
if(m%2!=0)
printf("%d",m);
}
return 0;
}
