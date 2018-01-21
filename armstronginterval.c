#include<stdio.h>
	int main()
	{
	int c,d,i,temp,num,rem;
	scanf("%d%d",&c,&d);
	for(i=c+1;i<d;++i)
	{
	temp=i;
	num=0;
	while(temp!=0)
	{
	rem=(temp%10);
	num+=rem*rem*rem;
	temp/=10;
	}
	if(i==num)
	{
	printf("%d\t",i);
	}
	}
	return 0;
	}
