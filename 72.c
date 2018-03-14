#include<stdio.h>
main()
{
    char ch[100];
    int c=0,i;
    for(i=0;i<200;i++)
    {
    scanf("%s",&ch[i]);
    }
    for(i=0;i<100;i++)
    {
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
    {
     c++;
    }}
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
