#include<stdio.h>
int main()
{
int num,i,fact=0;
printf("enter the number");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
fact=fact+i;
}
printf("factorial is %d",fact);
return 0;
}
