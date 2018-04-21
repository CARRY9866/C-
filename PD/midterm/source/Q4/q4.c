#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]={0};
    char s2[10]={0};
    int x,i;

    while(scanf("%s",s1)!=EOF)
    {

    x=strlen(s1);
    for(i=0;i<x;i++)
    {
        s2[i]=s1[x-i-1];
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')s2[i]='x';

    }
    s2[x]=0;
    printf("%s\n",s2);
    }
    return 0;

}
