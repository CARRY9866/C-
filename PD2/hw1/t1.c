#include<stdio.h>
#include<string.h>
int main(){

    char s1[]={"tree"};
    int i,n=strlen(s1);
    for(i=n;i>=2;i--)
    s1[i+2]=s1[i];
    printf("%s",s1);
    return 0;
}