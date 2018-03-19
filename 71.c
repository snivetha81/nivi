#include <stdio.h>
#include<string.h>
int main(void) {
	char r[45],n[34];
	int l,i;
	printf("enter the string");
	scanf("%s",&r);
	l=strlen(r);
	for(i=l-1;i>=0;i--)
	{
		n[l-i-1]=r[i];
	}
	if(strcmp(r,n)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
	
	
	return 0;
}
