#include <stdio.h>
 
void main()
{
    char a[100];
    int c = 0, i;
 
    printf("enter the string");
    scanf("%[^\n]s",&a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
            c++;    
    }
    printf("%d\n", c + 1);
}
