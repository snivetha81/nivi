#include <stdio.h>
 
void main()
{
    char a[100];
    int count = 0, i,alpha=0,digit=0,spc=0,sc=0;
 
    printf("enter the string\n");
    scanf("%[^\n]s",&a);
    for (i = 0;a[i]!= '\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
        	alpha++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
        	digit++;
  
        }
        else if(a[i]==' ')
        {
        	spc++;
        }
   else
   {
   	sc++;
   }
}
 printf("%d", sc);
}
