#include<stdio.h>
main()
{
int a,b;
printf("before swapping");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping");
scanf("%d%d",&a,&b);
}
