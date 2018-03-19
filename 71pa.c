#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,c=0;
    char a[10];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0,j=n-1;i<=n/2;i++,j--)
{
    if(a[i]!=a[j])
    {
      
        c++;
    }
    
}
if(c==0)
{
    printf("palindrome");
}
else
{
    printf("not a palindrome");
}
}
