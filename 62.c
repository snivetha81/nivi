#include<stdio.h>
#include<string.h>

main()
{
    int i,m,c=0;
    char a[100];
    scanf("%s",&a);
    m=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]=='0'||a[i]=='1')
    {
       
        c++;
    }
    }
    if(m==c)
    {
        printf("yes");
    }

}
