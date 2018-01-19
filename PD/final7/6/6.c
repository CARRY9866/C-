#include<stdio.h>
#include<string.h>
#define lim 100

int main(){
    char x[lim];
    while(scanf("%s",x)!=EOF)
    {   
        int len=strlen(x),i;
        for(i=0;i<len;i++)
        {
            if(x[i]>=65&&x[i]<=90)x[i]+=32;
        }
        printf("%s\n",x);
    }
}