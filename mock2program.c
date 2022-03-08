#include <stdio.h>
#include<stdlib.h>
char stringsearch(char str[],char c)
{
    int i,j,x,found,not_found;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            j=1;
            x=found;
        }
        if(x==found)
        return 1;
        else
        return 0;
    }
}

int main()
{
    char c,x,a;
    char *str;
    int n;
    printf("enter the number of strings: ");
    scanf("%d",&n);
    str=(char *)malloc(sizeof(char)*size);
    printf("enter the string:");
    scanf("%s",str);
    printf("enter the string to search:");
    scanf("%s",&c);
    x=stringsearch(str,c);
    (x==1)?printf("found at %d",x):printf("not found");

    return 0;
}

