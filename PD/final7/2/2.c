#include<stdio.h>
#include<string.h>
#define lim 1000
int getword(char *x,int max)
{
    int i=0,c,flag=0;
    while((c=getchar())!=EOF)
    {
        if(i<max &&((c>=65&&c<=90)||(c>=97&&c<=122)))
        {
            x[i]=c;
            i++;
            flag=1;
        }
        else if(flag)break;
    }
    x[i]='\0';
    return i;
}
int main(){

    char unit[lim],longest[lim];
    int len,max=0;
    while((len=getword(unit,lim))>0)
    {
        if(len>max)
        {
            max=len;
            strcpy(longest,unit);
        }
    }
    printf("%s\n",longest);
return 0;
}